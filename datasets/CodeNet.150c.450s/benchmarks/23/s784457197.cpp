#include <iostream>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main() {
    int f[50];
    f[0]=f[1]=1;
    int n;
    cin>>n;
    rep(i,n+1) if(i>1) f[i]=f[i-1]+f[i-2];
    cout<<f[n]<<endl;
    return 0;
}