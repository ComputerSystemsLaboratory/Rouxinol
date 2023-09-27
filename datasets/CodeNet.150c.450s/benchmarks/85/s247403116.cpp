#include<iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int d[n+1];
    for(int i=0;i<n;++i) cin>>d[i]>>d[i+1];
    int a[n][n];
    fill(a[0],a[n],1<<28);
    for(int i=0;i<n;++i) a[i][i]=0;
    for(int l=1;l<n;++l)
        for(int i=0;i<n-l;++i){
            int j=i+l;
            for(int k=i;k<j;++k)
                a[i][j]=min(a[i][j],a[i][k]+a[k+1][j]+d[i]*d[k+1]*d[j+1]);
        }
    cout<<a[0][n-1]<<endl;
}