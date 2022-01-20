#include<iostream>

using namespace std;

int main(){

   int num1, num2, total = 0, ulang = 1;
   
   
   while (ulang == 1)

   {
       cout<<"value num 1"<<endl;
       cin>>num1;

       cout<<"value num 2"<<endl;
       cin>>num2;
       
       total = num1 + num2;

       cout<<"your total is : "<<total<<endl;
       
        cout<<"nak ulang ke? kalau nak tekan '1' ";
        cin>>ulang;

   }

   cout<<"\n++++++++++++ALRIGHT++++++++++++++";
   return 0;
}