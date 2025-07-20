#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter number : ";
    cin>>x;
    if(x>=100 and x<=999) cout<<"Three digit number"<<endl;  // && --> and   dono valid hai cpp me 
    else cout<<"Not Three digit number"<<endl;         // || --> or   dono valid hai cpp me
     // check whether a number is divisibility by 5 or 3

    if(x%3== 0 or x%5==0) cout<<"Divisible";  // && --> and   dono valid hai cpp me 
    else cout<<"Not Divisible"; 
}