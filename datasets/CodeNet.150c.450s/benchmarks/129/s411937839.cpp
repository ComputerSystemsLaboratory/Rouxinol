#include <iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a[r+1][c+1];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int k=0;k<r+1;k++){
        a[k][c]=0;
    }
    
    for(int k=0;k<c+1;k++){
        a[r][k]=0;
    }
    
    for(int k=0;k<r;k++){
        for(int l=0;l<c;l++){
            a[k][c]+=a[k][l];
        }
    }
    for(int l=0;l<=c;l++){
        for(int k=0;k<r;k++){
            a[r][l]+=a[k][l];
        }
    }
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            cout<<a[i][j];
            if(j<c)cout<<" ";
        }
        cout<<endl;
    }
}