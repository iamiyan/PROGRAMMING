#include <iostream>
using namespace std;

int main (){

 int num ;
 char again; 

do{

    cout << "Enter an integer: ";
    cin >> num; 
        
        if ( num % 2 == 0 )
        {
        cout << num<< " is even.";
        }

        else
        {
        cout << num << "  is odd  " << endl;
        }

            if (num % 3== 0)
            {
            cout<<num<< " Divisible by 3  " ;
            }
            
            else
            {
            cout<<num<< "  Is not divisible by 3  ";
            }

  cout<<"\nEnter 'Y' to continue or Enter 'N' to stop: " ;
  cin>>again;


} while(again == 'Y' || again == 'y' );


return 0;

}