
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int N = 100;
    int guess_no, random_no;

    srand(static_cast<unsigned>(time(0)));
    random_no = rand()%(N+1);


    cout << "!!! Welcome to the Game of Guessing the Number !!! "<<endl;

    do
    {

        cout << "guess the number between 0-100 : " << endl;
        cin >> guess_no;

        if (random_no == guess_no)
        {
            cout << "You Guess the right number !" << endl;
        }

        else
        {
            cout << " Wrong Number !" << endl;

            if (random_no < guess_no)
            {
                cout << "You guess too High number " << endl;
            }
            if (random_no > guess_no)
            {
                cout << "You guess too Low number " << endl;
            }
        }
    } while (random_no != guess_no);

    return 0;
}
