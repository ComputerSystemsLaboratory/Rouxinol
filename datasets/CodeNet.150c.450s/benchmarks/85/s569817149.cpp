#include <iostream>
using namespace std;
int m[1000][1000];
int maxchainorder(int p[],int a){
    int n=a;
    for(int i=1;i<=n;i++){
        m[i][i]=0;
    }
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            int j=i+l-1;
            m[i][j]=100000000;
            for(int k=i;k<=j-1;k++){
                int q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j]){
                    m[i][j]=q;
                }
            }
        }
    }
    return m[1][n];
}
int main(){
    int n,p[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i]>>p[i+1];
    }
    cout<<maxchainorder(p,n)<<endl;
    return 0;
}
