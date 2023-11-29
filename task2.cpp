#include <iostream>
using namespace std;

int num1, num2;
int option;

int main()
{

    cout << "enter the first number :" << endl;
    cin >> num1;

    cout << "enter the second number" << endl;
    cin >> num2;

    cout << "enter the option :" << endl;
    cout << " 1. addition :" << endl;
    cout << " 2. substration :" << endl;
    cout << " 3. mutiplication :" << endl;
    cout << " 4. division :" << endl;
    cout << " 5. exit :" << endl;

    cin >> option;
    
    switch (option)
    {
    case 1:
        cout << num1 << "+" << num2 << " = " << num1 + num2;
        break;
    case 2:
        cout << num1 << "-" << num2 << " = " << num1 - num2;
        break;
    case 3:
        cout << num1 << "*" << num2 << " = " << num1 * num2;
        break;
    case 4:
        if (num2 != 0)
        {
            cout << num1 << "/" << num2 << " = " << num1 / num2;
        }
        else
        {
            cout << "ERROR : Division by Zero !";
        }
        break;
    case 5:

        break;

    default:
        cout << "Invalid Option ! ";
        break;
    }
}