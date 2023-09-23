#include<iostream>
using namespace std;
int main(){
    int a[101][101],g,r;
    cin>>g>>r;
    for(int i=0;i<g;i++)
       for(int j=0;j<r;j++)cin>>a[i][j];
    for(int i=0;i<=g;i++)a[i][r]=0;
    for(int j=0;j<=r;j++)a[g][j]=0;
    for(int i=0;i<g;i++){
        for(int j=0;j<r;j++){
            a[i][r]+=a[i][j];
            a[g][j]+=a[i][j];
            a[g][r]+=a[i][j];
        }
    }
    for(int i=0;i<=g;i++){
        for(int j=0;j<=r;j++){
            if(j)cout<<" ";
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;    
}
