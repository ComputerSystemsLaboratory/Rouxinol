#include<iostream>
using namespace std;

int main(){
   int n,m;
    cin>>n>>m;
    int a[n][m];
    int sum[n];
    int sum2[m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
        sum[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
            sum[i]+=a[i][j];
        }
        cout<<sum[i]<<endl;
    }
    for(int j=0;j<=m;j++){
        sum2[j]=0;
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            sum2[j]+=a[i][j];
        }
        cout<<sum2[j]<<" ";
        sum2[m]+=sum2[j];
    }
    cout<<sum2[m]<<endl;
    return(0);
}