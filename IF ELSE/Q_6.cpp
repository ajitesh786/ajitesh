#include<iostream>
using namespace std;
int  main() {
    int a,b;
    char ch;
    cout<<"Enter number a : ";
    cin>>a;
    cout<<"Enter oprator (+ , - , / ,  * , %) : ";
    cin>>ch;
    cout<<"Enter number b : ";
    cin>>b;

    switch (ch)
    {
    case '+':
       cout<< "a + b = "<<(a+b) << endl;
        break;
    case '-' : cout << "a - b = "<<(a-b)<<endl;
        break;
    case '*' : cout << "a * b = "<<(a*b)<<endl;
        break;
    case '/' : cout << "a / b = "<<(a/b)<<endl;
        break;
    case '%' : cout << "a % b = "<<(a%b)<<endl;
        break;
    






    default: cout<<"Not a valid character input";
        break;
    }
}