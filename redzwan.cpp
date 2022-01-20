#include<iostream>

using namespace std;

int main(){

    int mark;

    cout << "Enter Your Mark = ";
    cin >> mark;

    if (mark <= 30)   
        cout << "See Me After School" << endl;
        cout << "We Will Have A Special Lesson" << endl;  
    
    else if (mark >= 50 && mark <= 89)    
    {    cout << "You Passed" << endl;
        cout << "Congratulations" << endl;
    }
    else if (mark >= 31 && mark <= 49)
    {    cout << "You Failed" << endl;
        cout << "Try Harder Next Time" << endl;
    }

     else if (mark >= 90 && mark <= 100)
    {        cout << "WOW A+" << endl;
            cout << "Good Job" << endl;
    }
    

    return 0;

}
