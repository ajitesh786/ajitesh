#include<iostream>
using namespace std;
int fact(int n) {
int i,f = 1;

    for(i = 1; i<=n;i++) {
      f = f *i;
    }
    return f;
}
int main() {
    int r,n;
    cout<<"Enter number to calculate factorial : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    
    cout<<"nCr = "<<  fact(n)/(fact(r) * fact(n-r))<<endl;

    cout<< "nPr = "<< fact(n)/fact(n-r) <<endl;
    return 0;

}