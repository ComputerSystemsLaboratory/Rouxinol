#include<bits/stdc++.h>
using namespace std;

int n,s;
int dfs(int p,int t,int r){
    if(p==10){
        if(t==0&&r==s)return 1;
        return 0;
    }
    return dfs(p+1,t,r)+dfs(p+1,t-1,r+p);
}
int main(){
    while(cin>>n>>s,n||s)cout<<dfs(0,n,0)<<endl;
    return 0;
}