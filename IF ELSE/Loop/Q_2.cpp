#include<iostream>
using namespace std;
int main() {
    int i,n;
    cout<<"Enter number : ";
    cin>>n;
    for(i = 1; i<=n; i= i+2) {
        cout<<i<<",";
    //     if(i==n)
    //     continue;
    //     cout<<",";
    // }
    }
    // Method 2nd
    for(i = 1; i<=n; i++) {
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}