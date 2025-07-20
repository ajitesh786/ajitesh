// highest factor of a number 
#include<iostream>
using namespace std;
int main() {
    int i,n;
    cout<<"Enter number : ";
    cin>>n;
    int hf;
    for(i = 1; i<=(n/2); i++) {
        if(n%i==0){
            hf = i;
        }
    }
    cout<<"highest factor : "<<hf;

    // Method 2
    // for(i = n/2; i>=1; i--){
    //     if(n%i == 0){
    //         cout<<i<<" ";
    //         break; // To get out of the loop
    //     }
    // }
    }














