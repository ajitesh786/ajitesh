#include<iostream>
using namespace std;

int fact(int n) {
int i,f = 1;
    for(i = 1; i<=n;i++) {
      f = f *i;
    }
    return f;
}

int nCr(int n,int r) {
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    return a/(b*c);
}

int main() {
    int i,j,n;
    cout<<"Enter n : ";
    cin>>n;
 
    for(i = 0; i<=n ; i++ ) {

        for(j = 0; j<=i; j++){

            cout<<nCr(i,j)<<" ";
    //    cout<< " *";
    
        }
        cout<<endl;
     }
 cout<<endl;

    //Pascal Triag
    for(i = 0; i<=n ; i++ ) {
    for(j = 0; j<= n-i;j++){
        cout<<"  ";
    }
        for(j = 0; j<=i; j++){
            cout<<nCr(i,j)<<"   ";
        }
        cout<<endl;
    }
    return 0;
}