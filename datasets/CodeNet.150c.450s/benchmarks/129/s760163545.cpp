#include <iostream>
using namespace std;
int main(){
    int r,c,a[101][101]={};
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][c]+=a[i][j];
            a[r][j]+=a[i][j];
        }
        a[r][c]+=a[i][c];
    }
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            if(j<c)
            cout<<a[i][j]<<" ";
            else cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
