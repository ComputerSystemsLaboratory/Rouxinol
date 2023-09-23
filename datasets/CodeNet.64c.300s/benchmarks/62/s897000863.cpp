#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int a=0,f,r,v,n,x=0,y=0,i,j,m;
    cin>>n>>m;
    int A[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    int b[1000];
    for(i=0;i<1000;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a+=b[j]*A[i][j];
        }
        
        cout<<a<<endl;
        
        a=0;
    }
}

