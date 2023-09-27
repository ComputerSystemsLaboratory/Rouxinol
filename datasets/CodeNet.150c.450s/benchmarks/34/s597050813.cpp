#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n=0;
        cin>>n;
        if(n==0)break;
        int p[45]={0};
        p[0]=1;
        p[1]=1;
        p[2]=2;
        for(int i=3;i<=30;i++){
            p[i]=p[i-1]+p[i-2]+p[i-3];
        }
        int ans=p[n]/3650;
        if(p[n]%3650>0)ans++;
        cout<<ans<<endl;
    }
    return 0;
}