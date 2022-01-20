#include<iostream>

using namespace std;

int main(){

   char code;
   string colour, colMeaning;

   cout<<"enter your colour code = ";
   cin>> code;

    switch (code)

{
    case 'G':
    case 'g':
    colour ="Green\n";
    colMeaning ="fresh\n";


    break;

    case 'B':
    case 'b':
    colour ="blue\n";
    colMeaning ="stability\n";


    break;

    case 'R':
    case 'r':
    colour ="Red\n";
    colMeaning ="power\n";

    break;

    case 'Y':
    case 'y':
    colour ="yellow\n";
    colMeaning = "joy\n";

    break;

}
    cout << "Colour: " << colour << "Colour Meaning: " << colMeaning << endl;
    return 0;
}