#include <iostream>

using namespace std;

int main(){

    int num1, total = 0;
	char repeat;
    bool lagi = true;
    

    

    while (lagi)
    {
		cout<<"\nenter a number ";
		cin>>num1;
    	total = total + num1 ;
    	cout<<"new total is : "<<total<<endl<<endl;
    	
     	cout<<"please N or n to stop or any character to continue ";
    	cin>>repeat;
    	
    	if (repeat == 'N' || repeat == 'n')
    	    lagi = false;
    	    
    }

    cout<<"your final total is : "<<total<<endl;
  
  return 0;

}