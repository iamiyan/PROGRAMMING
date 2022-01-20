/* Write a C++ program that prompts the user to enter an integer.
Check whether the integer is an even number and Divisible by 3.
Print an appropriate message.
Repeat the process till the user wants to stop. */
#include <iostream>
using namespace std;

int main()
{
    int Num;
        char Answer;
    do {
        cout << "Please Enter A Number : ";
                cin >> Num;
            if(Num % 2 == 0) //multi-way Selection
                            cout << "\n" << Num << " Is An Even Number\n";
            else
                            cout << "\n" << Num << " Is Not An Even Number\n";
                if(Num % 3 == 0)
                                    cout << Num << " Can Be Divisible By 3\n";
                else
                                    cout << Num << " Can Not Be Divisible By 3\n";

        cout << "\nPlease Enter 'Y' To Check Another Number Or Enter 'N' To Stop : ";
                cin >> Answer;
    } while(Answer == 'Y' || Answer == 'y');
    cout <<"\n++++++++++TAMAT++++++++++" << endl;
        return 0;
        } // made by Muqsit