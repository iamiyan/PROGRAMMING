#include<iostream>
using namespace std;

int main(){

    double CGPA;
    string Message;

    cout << "Enter your CGPA: ";
    cin >> CGPA;


    if(CGPA <= 1.9)
    cout<<Message<<"Fail";

    else if(CGPA >= 2.0 && CGPA <= 2.19)
    cout<<Message<<"Third class";

    else if(CGPA >= 2.2 && CGPA <= 2.9)
    cout<<Message<<"Second class lower";

    else if(CGPA >= 3.0 && CGPA <= 3.49)
    cout<<Message<<"Second class upper";

    else if(CGPA >= 3.5 && CGPA <= 4.0)
    cout<<Message<<"First class upper";

    else if(CGPA > 4.0)
    cout<<Message<<"Error, Please Try Again";

   

    return 0;
}