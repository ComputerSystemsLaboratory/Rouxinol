#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
#define INT(x) int x; scanf("%d",&x)
#define INPUT(x) scanf("%d",&x)
#define REP1(x,n) for(int x = 0; x < n; x++)
#define REP2(s,e) for(int x = s; x <= e; x++)
#define BR printf("\n")
#define INF 2000000000

int SEG[400000] = {};//18 stages

void upd(int i){
    if(i == 0) return;
    if(i%2 == 1){//left
        int p = (i-1)/2;
        SEG[p] = SEG[i] + SEG[i+1];
        upd(p);
    }else{
        int p = (i-2)/2;
        SEG[p] = SEG[i-1] + SEG[i];
        upd(p);
    }
}

void Updade(int i,int x){
    SEG[i+131071] += x;//i + 2^17-1
    upd(i+131071);
}

int Rsq(int a, int b, int k, int l, int r){
    if (b <= l || r <= a) return 0;
    if (a <= l && r <= b) return SEG[k];
    else{
        int lm = Rsq(a,b,2*k+1,l,(l+r)/2);
        int rm = Rsq(a,b,2*k+2,(l+r)/2,r);
        return lm + rm;
    }
}

int main(){
    INT(n);INT(q);
    
    REP1(i,q){
        INT(com);INT(x);INT(y);
        if (com == 0) {
            Updade(x,y);
        }else{
            printf("%d\n",Rsq(x,y+1,0,0,131072));//0 -> 2^17
        }
    }
    return 0;
}