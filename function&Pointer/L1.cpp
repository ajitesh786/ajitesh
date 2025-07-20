#include<iostream>
using namespace std;
void greet(){
    cout<<"good morning"<<endl;
    cout<<"how are you"<<endl;
    return ;
}
int main() {
    cout<<"You are in main"<<endl;
    greet();
    cout<<"hey"<<endl;
    greet();

}
