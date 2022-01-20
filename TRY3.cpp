#include <iostream>

using namespace std;

int main(){

    int num1, ulang = 0, total = 0;
    

    for (ulang; ulang < 5; ulang++)
    {

    cout<<"\nplease enter number : ";
    cin>>num1;

    total = total + num1 ;
    cout<<"new total is : "<<total<<endl<<endl;

    }

    cout<<"your final total is : "<<total<<endl;
    return 0;

}
    