#include<iostream>
using namespace std;
int D=365,c[26+1],last[26+1];
int main(){
    cin>>D;
    int s[D+1][26+1];
    for(int i=1;i<=26;i++)cin>>c[i];
    for(int i=1;i<=D;i++)for(int j=1;j<=26;j++)cin>>s[i][j];
    int t[D+1];
    for(int i=1;i<=D;i++)cin>>t[i];
    int v[D+1];v[0]=0;
    for(int d=1;d<=D;d++){
        v[d]=v[d-1]+s[d][t[d]];
        last[t[d]]=d;
        for(int i=1;i<=26;i++)v[d]-=c[i]*(d-last[i]);
    }
    for(int i=1;i<=D;i++)cout<<v[i]<<endl;
    return 0;
}