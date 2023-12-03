/////..........welcome to the game of Tic Tac Toe................/////

#include <iostream>
using namespace std;
string name1 = "";
string name2 = "";

int row, column;
bool tie = false;
char chance = 'x';
char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void func1()
{

    cout << "       |       |       \n";
    cout << "  " << space[0][0] << "    |   " << space[0][1] << "   |   " << space[0][2] << "   \n";
    cout << "_______|_______|_______\n";
    cout << "       |       |       \n";
    cout << "  " << space[1][0] << "    |   " << space[1][1] << "   |   " << space[1][2] << "   \n";
    cout << "_______|_______|_______\n";
    cout << "       |       |       \n";
    cout << "  " << space[2][0] << "    |   " << space[2][1] << "   |   " << space[2][2] << "   \n";
    cout << "       |       |       \n";
}

void func2()
{

    int digit;

    if (chance == 'x')
    {
        cout << name1 << " please enter the place where you want to insert the 'x' " << endl;
        cin >> digit;
    }

    if (chance == '0')
    {
        cout << name2 << " please enter the place where you want to insert the '0' " << endl;
        cin >> digit;
    }

    if (digit == 1)
    {
        row = 0;
        column = 0;
    }
    if (digit == 2)
    {
        row = 0;
        column = 1;
    }
    if (digit == 3)
    {
        row = 0;
        column = 2;
    }
    if (digit == 4)
    {
        row = 1;
        column = 0;
    }
    if (digit == 5)
    {
        row = 1;
        column = 1;
    }
    if (digit == 6)
    {
        row = 1;
        column = 2;
    }
    if (digit == 7)
    {
        row = 2;
        column = 0;
    }
    if (digit == 8)
    {
        row = 2;
        column = 1;
    }
    if (digit == 9)
    {
        row = 2;
        column = 2;
    }
    else if (digit < 1 || digit > 9)
    {
        cout << "You enter INVALID place number !!!!" << endl;
    }

    if (chance == 'x' && space[row][column] != 'x' && space[row][column] != '0')
    {
        space[row][column] = 'x';
        chance = '0';
    }
    else if (chance == '0' && space[row][column] != 'x' && space[row][column] != '0')
    {
        space[row][column] = '0';
        chance = 'x';
    }
    else
    {
        cout << "there is no empty space !" << endl;
        func2();
    }
}

bool func3()
{

    for (int i = 0; i < 3; i++)
    {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
        {
            return true;
        }
    }
    if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[2][0] == space[1][1] && space[1][1] == space[0][2])
    {
        return true;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != 'x' && space[i][j] != '0')
            {
                return false;
            }
        }
    }
    tie = true;
    return true;
}

int main()
{
    cout << "**********Welcome to the game of Tic Tac Toe**********" << endl
         << endl;

    cout << "enter the name of the first player : " << endl;
    cin >> name1;
    cout << "enter the name of the second player : " << endl;
    cin >> name2;

    while (!func3())
    {
        func1();
        func2();
        func3();
    }

    if (chance == 'x' && tie == false)
    {
        func1();
        cout << name2 << " Wins the Game !" << endl;
    }
    else if (chance == '0' && tie == false)
    {
        func1();
        cout << name1 << " wins the Game !" << endl;
    }
    else
    {
        cout << "It's a draw !" << endl;
    }
}