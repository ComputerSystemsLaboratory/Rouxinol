#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(i=0;i<n;i++)

int n,A[30];
bool res = false;

bool solve(int i,int m){
    if(m==0) return true;
    if(i>=n) return false;
    res = solve(i+1,m) || solve(i+1,m-A[i]);
    return res;
}

int main(){
    int i;
    scanf("%d",&n);
    rep(i,n) scanf("%d",&A[i]);
    int q,tmp;
    scanf("%d",&q);
    rep(i,q){
        scanf("%d",&tmp);
        if(solve(0,tmp)) printf("yes\n");
        else printf("no\n");
    }
}