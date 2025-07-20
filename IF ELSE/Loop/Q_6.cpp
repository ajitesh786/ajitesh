#include<iostream>
using namespace std;
int main() {
    int i,n1,n2,hcf;
    cout<<"Enter n1 and n2 : ";
    cin>>n1>>n2;
   int min = (n1<n2) ? n1 : n2;
    for(i = 1; i<= min ; i++){
     if(n1%i == 0 and n2%i == 0){
    hcf = i;
    }
}
    cout<<"highest common factor : "<<hcf;

}