#include<bits/stdc++.h>
using namespace std;

int main(){
    int f[45],n;
    cin>>n;
    f[0]=1;f[1]=1;
    for(int i=2;i<45;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n]<<endl;
    return 0;
}
