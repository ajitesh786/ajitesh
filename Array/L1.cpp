#include<iostream>
using namespace std;
int main() {
// extern int a[];
// int roo_no[] = {1,3,4,5};
int n;
int arr[20];
cout<<"Enter number : ";
cin>>n;
cout<<"Enter elements of array : ";
for(int i = 0; i<= n; i++) {
   cin>>arr[i];
}

cout<<"Entered elements of array are : "<<endl;
for(int i = 0; i<= n; i++) {
   cout<<arr[i]<<"\t";
}
return 0;

}