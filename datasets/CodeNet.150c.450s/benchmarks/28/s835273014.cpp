#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
#include<queue>
#include<stack>
using namespace std;
#define INT(x) int x; scanf("%d",&x)
#define INPUT(x) scanf("%d",&x)
#define REP1(x,n) for(int x = 0; x < n; x++)
#define REP2(x,s,e) for(int x = s; x <= e; x++)
#define RREP1(x,n) for(int x = n-1; x >= 0; x--)
#define RREP2(x,s,e) for(int x = s; x >= e; x--)
#define BR printf("\n")
#define INF 2000000000

typedef long long ll;

int N,K,W[100000];

class TR{
public:
    int mP;
    int K;
    
    void init(int P){
        mP = P;
    }
    
    bool load(int p){
        if (mP < p) {
            return true;
        }else{
            mP -= p;
            return false;
        }
    }
};

bool rec(int P){
    int i = 0;
    REP1(j,K){
        TR Truck;
        Truck.init(P);
        while (i < N) {
            if(Truck.load(W[i])) break;
            i++;
        }
    }
    if (i > N-1) {
        return true;
    }else{
        return false;
    }
}

int binary(int l,int r){
    if (r-l == 1) return r;
    int mid = (l+r)/2;
    if (rec(mid)) {
        return binary(l,mid);
    }else{
        return binary(mid,r);
    }
}

int main(){
    INPUT(N);INPUT(K);
    REP1(i,N) INPUT(W[i]);
    
    cout << binary(0,1000000000) << endl;
    return 0;
}