#include <iostream>

using namespace std;

int main(){

    int num1, total = 0;
    char stop = 'n';

    cout<<"please enter 'n' to exit or to calculate sum : ";
    cin>>stop;

    while (stop != 'n')
    {
    cout<<"enter a number : ";
    cin>>num1;

    total = total + num1 ;
    cout<<"new total is : "<<total<<endl<<endl;

    cout<<"please enter 'n' to exit or to calculate sum : ";
    cin>>stop;

    }

    cout<<"your final total is : "<<total<<endl;
    return 0;

}
    






