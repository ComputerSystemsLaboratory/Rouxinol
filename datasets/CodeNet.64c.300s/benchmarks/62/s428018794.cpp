#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a[100][100]={},b[100]={},n,m,i,iii,ii,c[100]={};
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(ii=0;ii<m;ii++){
            cin>>a[i][ii];
        }
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
            for(iii=0;iii<m;iii++){
                c[i]=c[i]+a[i][iii]*b[iii];
            }
        cout<<c[i]<<endl;
        
    }

return 0;}