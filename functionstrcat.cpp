#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char name1[20];
    char name2[20];

    cout<<"enter your first name : ";
    cin.getline(name1, 15);

    cout<<"enter your last name : ";
    cin.getline(name2, 15);

    strcat(name1, name2);

    cout << "your name is : " << name1;

    return 0;
}