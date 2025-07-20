  #include<iostream>
  using namespace std;
  int main() {
    int i,j,m,n;
    cout<< "Enter row and column : ";
    cin>>m>>n;
    for(i = 1; i<=m; i++){
        for(j = 1; j<=n; j++) {
            if(i%2!= 0)
            cout<<j<<" ";
            else
            cout<< (char)(j+'A' - 1)<<" ";
        }
        cout<<endl;
    }

  }