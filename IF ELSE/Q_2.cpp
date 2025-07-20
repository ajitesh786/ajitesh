# include<iostream>
using namespace std;
int main() {
    int cp,sp;
    cout <<"Enter cost price : ";
    cin>>cp;
    cout << "Enter selling price : ";
    cin>> sp;
    if(sp>cp) cout<<"Profit : "<<(sp-cp)<<endl;
    else if(sp<cp) cout<<"Loss : "<<(cp-sp)<<endl;
    else cout<<"No profit no loss";

}
