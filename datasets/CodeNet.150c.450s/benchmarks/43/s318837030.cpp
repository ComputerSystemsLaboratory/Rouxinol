#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
    int n;
    scanf("%d", &n);
    if(n==0) return 0;
    vector<int> a(n), b(n);
    for(int i=0;i<n;++i) scanf("%d %d", &a[i],&b[i]);
    int as=0, bs=0;
    for(int i=0;i<n;++i){
        if(a[i]>b[i])as+=a[i]+b[i];
        else if(a[i]<b[i])bs+=a[i]+b[i];
        else {as+=a[i];bs+=b[i];}
    }
    printf("%d %d\n", as,bs);
    }
}