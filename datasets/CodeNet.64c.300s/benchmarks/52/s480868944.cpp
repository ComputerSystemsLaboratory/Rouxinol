#include<bits/stdc++.h>
using namespace std;
 
int N,S;
int dfs(int n,int t,int sum){
    if(n>10)return 0;
    if(t==N){
          if(sum==S)return 1;
          else return 0;
    }
    return dfs(n+1,t,sum)+dfs(n+1,t+1,sum+n);
}
int main(){
    while(cin>>N>>S,N||S)cout<<dfs(0,0,0)<<endl;
    return 0;
}