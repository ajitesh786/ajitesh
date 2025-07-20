#include<iostream>
using namespace std;
int main() {
    float a,b,c;
    cout<<"Enter three sides of triangle : ";
    cin>>a>>b>>c;
    if((a+b) >c and (b+c)>a && (a+c) >b) cout << "Triangle is valid by this sides";
    else cout<< "Triangle is not valid";
}