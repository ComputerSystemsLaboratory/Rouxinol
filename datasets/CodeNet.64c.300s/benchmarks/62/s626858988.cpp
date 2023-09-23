#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int n,m;
    int c=0;
    int a[1000][1000],b[1000];
    cin>>n>>m;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++){
         cin>>a[i][j];
         }}
         
        for(int j=1;j<=m;j++){
         cin>>b[j];
         } 
         
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
          
        c=c+a[i][j]*b[j];
    }  
    cout<<c<<endl;
    c=0;
    }
}