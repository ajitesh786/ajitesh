#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Enter odd num : ";
    cin>> n;
        for(i = 1; i<=n; i++){
        for(j = 1; j<=n; j++) {
         if(i == j || j== n+1 -i)
         cout<<"*";
         else
         cout<<" ";
        }
        cout<<endl;
    }

}