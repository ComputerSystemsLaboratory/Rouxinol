#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
#define int(x) int x; scanf("%d",&x)
#define input(x) scanf("%d",&x)
#define rep(x,n) for(int x = 0; x < n; x++)
#define _br printf("\n")
#define INF 2000000000

bool complete[100];
int d[100];

int rec_msp(int n, int Path[][100]){
    int moP = 0;
    rep(i,n){
        complete[i] = false;
        d[i] = INF;
    }
    d[0] = 0;
    int num = 0;
    
    
    while (num != n) {
    
        int mind = INF;
        int mindi = 0;
        rep(i,n){
            if (mind > d[i] && !complete[i]) {
                mind = d[i];
                mindi = i;
            }
        }
        
        complete[mindi] = true;
        num++;
        
        //update d[] with mindi.
        
        rep(i,n){
            if (Path[mindi][i] != -1 && d[i] > Path[mindi][i] && !complete[i]) {
                d[i] = Path[mindi][i];
            }
        }
        
    }
    
    int sum = 0;
    rep(i,n) sum += d[i];
    
    return sum;
}

int main(){
    int(n);
    int Path[100][100];
    rep(r,n){
        rep(c,n) input(Path[r][c]);
    }
    
    printf("%d\n",rec_msp(n,Path));
    
    return 0;
}