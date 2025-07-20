#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter three number to find biggest number : ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c) cout << a <<" is biggest"<<endl;
        else 
            cout<< c << " is biggest"<<endl;
    }
    else {
        if(b>c) cout << b << " is biggest"<<endl;
        else
             cout << c <<" is biggest"<<endl;
    }
    // Method 2nd
    cout<<"By method 2nd"<<endl;
    if(a>b && a>c) cout << a << " is biggest";
    else if(b>a && b>c) cout << b << " is biggest"<<endl;
    else cout << c << " is biggest"<<endl;

    // if((a%5==0 or a%3 == 0) && a%15!=0 )
}