#include<bits/stdc++.h>
using namespace std;
#define rp(i,j) for(long long i=0;i<j;i++)
#define rep(i,j,k) for(long long i=j;i<k;i++)
#define mod 1000000007
#define NIL -1
#define MAX 100000
typedef long long ll;
int n;
vector<int>a[MAX];
int color[MAX];
void dfs(int r,int c){
    stack<int>S;
    S.push(r);
    color[r]=c;
    while(!S.empty()){
        int u=S.top();S.pop();
        rp(i,a[u].size()){
            int v=a[u][i];
            if(color[v]==NIL){
                color[v]=c;
                S.push(v);
            }
        }
    }
}
void colordefine(){
    int id=1;
    rp(i,n)color[i]=NIL;
    rp(i,n){
        if(color[i]==NIL)dfs(i,id++);
    }
}
int main(){
    int m,s,t,q;
    cin>>n>>m;
    rp(i,m){
        cin>>s>>t;
        a[s].push_back(t);
        a[t].push_back(s);
    }
    colordefine();
    cin>>q;
    rp(i,q){
        cin>>s>>t;
        string ans;
        if(color[s]==color[t])ans="yes";
        else ans="no";
        cout<<ans<<endl;
    }
}
