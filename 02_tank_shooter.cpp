// Codechef Profile - https://www.codechef.com/users/zaida43630


// Maximize the terminal to play the game

// Game rules-
// 1. In upper part of the screen, there are 5 tanks, those are enemy's tank
// 2. In lower part of the screen, there is a one tank, that is player's tank
// 3. enemy's tank can't move
// 4. For player's tank - To move left press 'a' key, for right press 's', to shoot the bullet press 'b' key
// 5. After the game if you want to play another game enter 'y' or 'Y'. 
// 6. To exit anytiime from the game press 'x' key.


#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int length = 25;
int width = 20;
int x, y, bulletx[10], bullety[10], flag[10], flagb[6], gameover, bulletn, enemyx[6], enemyy[6], enemybx[5], enemyby[5], pdeath, edeath[5];
void setup()
{
    int z;
    for (z = 0; z < 10; z++)
    {
        flag[z] = 0;
        flagb[z] = 0;
        edeath[z] = 0;
    }
    gameover = 0;
    bulletn = 0;
    pdeath = 0;

    x = length / 2 + 1;
    y = width / 2;

    int i, j;
    for (i = 0; i < 5; i++)
    {
        enemyx[i] = 1;
        enemyy[i] = (4 * i) + 1;
        enemybx[i] = 2;
        enemyby[i] = (4 * i) + 1;
    }
    for (j = 0; j < 10; j++)
    {
        bulletx[i] = x - 2;
        bullety[i] = y;
    }
}

void draw()
{
    system("cls");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == length - 1 || j == 0 || j == width - 1)
            {
                cout << "#  ";
            }
            // making my player
            else if ((i == x || i == (x - 1)) && j == y)
            {
                cout << "o o";
            }
            else if (i == (x - 2) && j == y)
            {
                cout << " o ";
            }
            else
            {
                // making enimies
                int d = 0;
                for (int k = 0; k < 5; k++)
                {
                    if (i == enemyx[k] && j == enemyy[k])
                    {
                        cout << "o o";
                        d = 1;
                    }
                    else if (i == enemyx[k] + 1 && j == enemyy[k])
                    {
                        cout << " o ";
                        d = 1;
                    }
                }
                int e = 0;
                for (int k = 0; k < 5; k++)
                {
                    if (i == enemybx[k] && j == enemyby[k] && d == 0)
                    {
                        cout << " o ";
                        e = 1;
                    }
                }
                int c = 0;
                for (int k = (bulletn - 1); k >= 0; k--)
                {
                    if (i == bulletx[k] && j == bullety[k] && d == 0)
                    {
                        cout << " o ";
                        c = 1;
                        break;
                    }
                }
                if (c == 0 && d == 0 && e == 0)
                {
                    cout << "   ";
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
            if (y <= 0)
            {
                y = 1;
            }
            break;
        case 's':
            y++;
            if (y >= (width - 1))
            {
                y = (width - 2);
            }
            break;
        case 'b':
            bulletn++;
            if (bulletn == 11)
            {
                bulletn = 1;
            }
            int i;
            for (i = 0; i < bulletn; i++)
            {
                if (i == (bulletn - 1))
                {
                    flag[i] = 1;
                }
            }
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
    srand(time(0));
    int j;
    for (int j = 0; j < 5; j++)
    {
        if (flagb[j] == 0)
        {
            flagb[j] = rand() % 2;
        }
    }
}

void make_logic()
{
    int i;
    for (i = 0; i < bulletn; i++)
    {
        switch (flag[i])
        {
        case 1:
            bulletx[i]--;
            break;
        case 2:
            gameover = 1;
            break;
        }
    }
    int j;
    for (j = 0; j < 10; j++)
    {
        if (bulletx[j] == 0)
        {
            flag[j] = 0;
        }
        if (flag[j] == 0)
        {
            bulletx[j] = x - 2;
            bullety[j] = y;
        }
    }
    int k;
    for (k = 0; k < 5; k++)
    {
        if (flagb[k] == 1)
        {
            enemybx[k]++;
        }
        if (enemybx[k] == (length - 1))
        {
            flagb[k] = 0;
            enemybx[k] = 1;
        }
    }
    int l;
    for (l = 0; l < 6; l++)
    {
        if (enemybx[l] == x - 2 && enemyby[l] == y)
        {
            pdeath++;
            flagb[l] = 0;
            enemybx[l] = 1;
        }
    }
    int m, n;
    for (m = 0; m < 10; m++)
    {
        for (int n = 0; n < 5; n++)
        {
            if (bulletx[m] == 2 && bullety[m] == enemyy[n])
            {
                edeath[n]++;
            }
        }
    }
}

void result()
{
    if (pdeath == 3)
    {
        static int w = 0;
        if (w == 1)
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
            cout << "                            G A M E O V E R";
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
            // cout<<"0";
            gameover = 1;
        }
        else
        {
            x = 62;
        }
        w++;
    }
    int i;
    for (i = 0; i < 5; i++)
    {
        if (edeath[i] == 3)
        {
            enemyx[i] = 60;
            enemybx[i] = 60;
        }
    }
    if (enemyx[0] == 60 && enemyx[1] == 60 && enemyx[2] == 60 && enemyx[3] == 60 && enemyx[4] == 60)
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
        cout << "                            Y O U    W O N !";
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
    char ch;
again:
    setup();
    while (!gameover)
    {
        draw();
        input();
        make_logic();
        result();
    }
    cout << "Enter Y for play again _";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        goto again;
    }
    return 0;
}