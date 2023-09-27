#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL,LL> P;
const LL mod=1e9+7;
const LL LINF=1LL<<62;

const int M_N=100000;

LL bit[M_N+1],n;

LL sum(int i){
    LL s=0;
    while(i>0){
        s+=bit[i];
        i=i&(i-1);
    }
    return s;
}

void add(int i,int x){
    while(i<=n){
        bit[i]+=x;
        i+=i&-i;
    }
}

int main(){
    int q;
    cin >> n >> q;
    for(int i=0;i<q;i++){
        int com,x,y;
        cin >> com >> x >> y;
        if(com==0) add(x,y);
        if(com==1) cout << sum(y)-sum(x-1) << endl;
    }
    return 0;
}

