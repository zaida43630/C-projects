#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int length = 35;
int width = 12;
int x, y, dropx[3], dropy[3], gameover, flag[3], death, fd[3], score,speed=50;

void setup()
{
    x = length / 2 + 9;
    y = width / 2;

    for (int i = 0; i < 3; i++)
    {
        fd[i] = 0;
        dropx[i] = 0;
        dropy[i] = (4 * i) + 1;
        flag[i] = 0;
    }
}

void t_setup()
{
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        if (fd[i] == 0)
        {
            fd[i] = rand() % 6 + 1;
        }
    }
}

void draw()
{
    system("cls");
    cout << " SCORE  :  " << score << endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == length - 1 || j == 0 || j == width - 1)
            {
                cout << "#   ";
            }
            //making my player
            else if ((i == x || i == x + 3) && j == y)
            {
                cout << "   O";
            }
            else if ((i == x || i == x + 3) && j == y + 1)
            {
                cout << " O  ";
            }
            else if ((i == (x + 2) || i == (x + 1)) && (j == y || j == y + 1))
            {
                cout << " O O";
            }
            else
            {
                //making drops

                int e = 0;
                for (int k = 0; k < 3; k++)
                {

                    if (fd[k] == 1)
                    {
                        if ((i == dropx[k] + 3 || i == dropx[k]) && j == dropy[k])
                        {
                            cout << " ++ ";
                            e = 1;
                        }
                        else if ((i == dropx[k] + 1 || i == dropx[k] + 2) && j == dropy[k])
                        {
                            cout << "+  +";
                            e = 1;
                        }
                    }
                    else if (fd[k] == 2)
                    {
                        if ((i == dropx[k] + 3 || i == dropx[k]) && j == dropy[k])
                        {
                            cout << " -- ";
                            e = 1;
                        }
                        else if ((i == dropx[k] + 1 || i == dropx[k] + 2) && j == dropy[k])
                        {
                            cout << "-  -";
                            e = 1;
                        }
                    }
                    else if (fd[k] == 3)
                    {
                        if ((i == dropx[k] + 3 || i == dropx[k]) && j == dropy[k])
                        {
                            cout << " pp ";
                            e = 1;
                        }
                        else if ((i == dropx[k] + 1 || i == dropx[k] + 2) && j == dropy[k])
                        {
                            cout << "p  p";
                            e = 1;
                        }
                    }
                    else if (fd[k] == 4)
                    {
                        if ((i == dropx[k] + 3 || i == dropx[k]) && j == dropy[k])
                        {
                            cout << " nn ";
                            e = 1;
                        }
                        else if ((i == dropx[k] + 1 || i == dropx[k] + 2) && j == dropy[k])
                        {
                            cout << "n  n";
                            e = 1;
                        }
                    }
                    else if (fd[k] == 5)
                    {
                        if ((i == dropx[k] + 3 || i == dropx[k]) && j == dropy[k])
                        {
                            cout << " 11 ";
                            e = 1;
                        }
                        else if ((i == dropx[k] + 1 || i == dropx[k] + 2) && j == dropy[k])
                        {
                            cout << "1  1";
                            e = 1;
                        }
                    }
                    else if (fd[k] == 6)
                    {
                        if ((i == dropx[k] + 3 || i == dropx[k]) && j == dropy[k])
                        {
                            cout << " 00 ";
                            e = 1;
                        }
                        else if ((i == dropx[k] + 1 || i == dropx[k] + 2) && j == dropy[k])
                        {
                            cout << "0  0";
                            e = 1;
                        }
                    }
                }
                if (e == 0)
                {
                    cout << "    ";
                }
            }
        }
        cout << endl;
    }
}

void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
            y--;
            if (y < 1)
            {
                y = 1;
            }
            break;
        case 's':
            y++;
            if (y > (width - 3))
            {
                y = (width - 3);
            }
            break;
        case 'w':
            x--;
            x--;
            if (x < 1)
            {
                x = 1;
            }
            break;
        case 'z':
            x++;
            x++;
            if (x > (length - 5))
            {
                x = (length - 5);
            }
            break;
        case 'x':
            death = 1;
            break;
        }
    }
}

void make_logic()
{
    int k;
    for (k = 0; k < 3; k++)
    {
        dropx[k]++;

        if (dropx[k] == (length - 1))
        {
            dropx[k] = 0;
            fd[k] = 0;
        }

        if (dropx[k] + 2 == x && (dropy[k] == y || dropy[k] == y + 1))
        {
            if (fd[k] == 1)
            {
                dropx[k] = 0;
                fd[k] = 0;
                score = score + 3;
            }
            else if (fd[k] == 3)
            {
                dropx[k] = 0;
                fd[k] = 0;
                score = score + 2;
            }
            if (fd[k] == 5)
            {
                dropx[k] = 0;
                fd[k] = 0;
                score = score + 1;
            }
            else if (fd[k] == 2 || fd[k] == 4 || fd[k] == 6)
            {
                death = 1;
            }
        }
    }
    if(score > 10 && score < 20){
        speed = 40;
    }
    else if(score > 20 && score < 30){
        speed = 30;
    }
    else if(score > 30 && score < 40){
        speed = 15;
    }
    else if(score > 40 && score < 50){
        speed = 5;
    }
    if(score > 50){
        speed = 0;
    }
    Sleep(speed);
}

void result()
{
    if (death == 1)
    {
        Sleep(3 * 1000);
        system("cls");
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        cout << "                            G A M E O V E R" << endl
             << endl
             << "                           S C O R E  :  " << score;
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        gameover = 1;
    }
}

int main()
{
    setup();
    while (!gameover)
    {
        t_setup();
        draw();
        input();
        make_logic();
        result();
    }
    return 0;
}