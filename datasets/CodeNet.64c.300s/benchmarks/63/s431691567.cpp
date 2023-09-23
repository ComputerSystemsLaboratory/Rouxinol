
#include <iostream>
#include<cstdio>
#include<queue>
#include<cmath>
using namespace std;
int n,m;

int GCDi(int a,int b){
   if(b!=0)return GCDi(b,a%b);
    return a;
}
int LCMi(int a,int b){
    int t;
    t = GCDi(a,b);
    return a/t*b;
}
int main(){        int q[100],r[100],p = 0;

    while(~scanf("%d%d",&n,&m)){
        if(n > m){q[p] = GCDi(n,m);r[p] =LCMi(n,m);}
        else {q[p] = GCDi(m,n) ;r[p] =LCMi(m,n);}
        p++;
    }
    for(int i = 0;i < p;i ++) cout<<q[i]<<" "<<r[i]<<endl;
        return 0;
}

