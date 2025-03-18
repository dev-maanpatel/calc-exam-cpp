#include<iostream>

using namespace std;

int sum(int , int);
int min(int , int);
int mul(int , int);
int divi(int , int);
int modu(int , int);


int main(){

    int a , b , choice;

    cout << "Enter first number :" ;
    cin >> a;
    cout << "Enter second number :" ;
    cin >> b;

    do
    {
        cout << "Press 1 for +: " << endl;
        cout << "Press 2 for -: " << endl;
        cout << "Press 3 for *: " << endl;
        cout << "Press 4 for /: " << endl;
        cout << "Press 5 for %: " << endl;
        cout << "Press 6 for exit: " << endl;

        cout << "Enter your choice :" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
            cout << "------------------------" << endl;
            cout << "Answer is : " << sum(a , b) << endl;
            cout << "------------------------" << endl;
            break;
            case 2:
            cout << "------------------------" << endl;
            cout << "Answer is : " << min(a , b) << endl;
            cout << "------------------------" << endl;
            break;
            case 3:
            cout << "------------------------" << endl;
            cout << "Answer is : " << mul(a , b) << endl;
            cout << "------------------------" << endl;
            break;
            case 4:
            cout << "------------------------" << endl;
            cout << "Answer is : " << divi(a , b) << endl;
            cout << "------------------------" << endl;
            break;
            case 5:
            cout << "------------------------" << endl;
            cout << "Answer is : " << modu(a , b) << endl;
            cout << "------------------------" << endl;
            break;
            case 6:
            cout << "------------------------" << endl;
            cout << "Thank you " << endl;
            cout << "------------------------" << endl;
            return 0; 
        }
    } while (choice);
    
    return 0;
}
int sum(int a , int b){
    return a + b;
}
int min(int a , int b){
    return a - b;
}
int mul(int a , int b){
    return a * b;
}
int divi(int a , int b){
    return a / b;
}
int modu(int a , int b){
    return a % b;
}


