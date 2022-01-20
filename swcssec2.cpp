#include<iostream>

using namespace std;

int main(){

    int num;
    char repeat;

    do
    {
        cout<<"\nPlease enter a number : ";
        cin>>num;

            if (num%2 == 0)
            {
                cout << num << " is an even number.\n";
            }

            else
            {
                cout << num << " is an odd number.\n";
            }   

            if(num%3 == 0)
            {
                cout << num << " is divisible by 3\n";
            }

            else
            {
                cout << num << " is not divisible by 3\n";
            }

        cout<<"\nif you want to repeat enter 'y' , if not enter 'n' :";
        cin>>repeat;

    }while(repeat == 'y' || repeat == 'Y');

    cout<<"\n+++++++END+++++++"<<endl;
    return 0;

}