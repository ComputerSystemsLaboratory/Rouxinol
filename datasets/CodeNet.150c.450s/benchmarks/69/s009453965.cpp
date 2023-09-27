#include <bits/stdc++.h>
using namespace std;
int a[10],n;

bool dfs(int i,int j,int k)
{
    if(i==10) return 1;
    if(a[i]>j&&a[i]>k) return dfs(i+1,a[i],k) || dfs(i+1,j,a[i]);
    else if(a[i]>j) return dfs(i+1,a[i],k);
    else if(a[i]>k) return dfs(i+1,j,a[i]);
    return 0;
}

int main()
{
    //mine
    ios::sync_with_stdio(false);
    cin>>n;
    while(n--){
        for(int i=0;i<10;i++) cin>>a[i];
        if(dfs(0,0,0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

