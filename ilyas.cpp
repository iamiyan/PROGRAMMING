#include <iostream>
using namespace std;

int main()
{
    int num, sumE = 0 , sumO = 0;
    char ans;

        while (ans=='Y'|| ans =='y');
    {
        cout << "Enter a number : ";
        cin >> num;

        if (num%2 == 0)
        {
            cout << num << "is an even number."<<endl;
            sumE = sumE + num;
        }

        else
        {
            cout << num << "is an odd number."<<endl;
            sumO = sumO + num;
        }

        cout << "Enter 'Y' to check another number of 'N' to stop.";
        cin >>ans;
    }

    cout<<"The sum of the even number entered is "<<sumE<<"."<<endl;
    cout<<"The sum of the odd number entered is "<<sumO<<"."<<endl;
    return 0;
}