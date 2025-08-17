// Maximize the terminal to play the game

//  To move the snake left press 'a' key, for right press 's',for up press 'w', for down press 'z'



#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int length = 20, width = 20, flag, gameover, tail;
int x, y;
int fruitx, fruity, tailx[50], taily[50];
void setup()
{
    x = length / 2;
    y = width / 2;
    srand(time(0));
label1:
    fruitx = rand() % (length - 1);
    if (fruitx == 0)
    {
        goto label1;
    }
label2:
    fruity = rand() % (width - 1);
    if (fruity == 0)
    {
        goto label2;
    }
}
void draw()
{
    system("cls");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == (length - 1) || j == 0 || j == (width - 1))
            {
                cout << "# ";
            }
            else if (i == x && j == y)
            {
                cout << "O ";
            }
            else if (i == fruitx && j == fruity)
            {
                cout << "F ";
            }
            else
            {
                int a = 1;
                for (int k = 0; k < tail; k++)
                {
                    if (i == tailx[k] && j == taily[k])
                    {
                        cout << "o ";
                        a = 0;
                    }
                }
                if (a)
                    cout << "  ";
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
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'w':
            flag = 3;
            break;
        case 'z':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}
void make_logic()
{
    if (x == fruitx && y == fruity)
    {
    label3:
        fruitx = rand() % (length - 1);
        if (fruitx == 0)
        {
            goto label3;
        }
    label4:
        fruity = rand() % (width - 1);
        if (fruity == 0)
        {
            goto label4;
        }
        tail++;
    }
    if (tail > 0)
    {
        for (int i = tail; i > 0; i--)
        {
            tailx[i] = tailx[i - 1];
            taily[i] = taily[i - 1];
        }
        tailx[0] = x;
        taily[0] = y;
    }
    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    }
    if (x < 1 || x > (length - 2) || y < 1 || y > (width - 2))
    {
        gameover = 1;
    }
    for (int i = 0; i < tail; i++)
    {
        if (tailx[i] == x && taily[i] == y)
        {
            gameover = 1;
        }
    }
}
int main()
{
    setup();
    while (!gameover)
    {
        draw();
        input();
        make_logic();
        Sleep(80);
    }
    return 0;
}