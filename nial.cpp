#include <iostream>

using namespace std;

int main(){

    int num1,total = 0;
    char ulang;

    cout<<"please enter N or n to stop";
    cin>>ulang;
   
    while (ulang !='N' || ulang !='n')
    {
    
        cout<<"\nplease enter number : ";
        cin>>num1;
        total = total + num1 ;
        cout<<"\nnew total is : "<<total<<endl<<endl;

        cout<<"\nplease enter N or n to stop";
        cin>>ulang;

        cout<<"\nyou have entered"<<ulang;
    
    }
    cout<<"your total is : "<<total<<endl;
    return 0;

}