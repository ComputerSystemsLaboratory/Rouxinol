#include <bits/stdc++.h>
using namespace std;

int A[2001];
int q, n;

bool solve(int i, int m){
    if(m==0) return true;
    if(i>=n) return false;
    bool res = solve(i+1, m) || solve(i+1, m-A[i]);
    return res;
}


int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i) scanf("%d",&A[i]);
    scanf("%d",&q);
    int m;
    for(int i=0;i<q;++i){
        scanf("%d",&m);
        if(solve(0,m)) printf("yes\n");
        else printf("no\n");
    }

}

