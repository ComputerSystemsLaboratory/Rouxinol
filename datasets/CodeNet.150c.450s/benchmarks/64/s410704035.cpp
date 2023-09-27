#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int A[20];
int n;
bool rec(int Q, int q, int i){
    if (i == n) {
        return q == Q;
    }
    return rec(Q,q + A[i],i+1)|rec(Q,q,i+1);
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) scanf("%d",&A[i]);
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int Q;
        scanf("%d",&Q);
        if (rec(Q,0,0)) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}