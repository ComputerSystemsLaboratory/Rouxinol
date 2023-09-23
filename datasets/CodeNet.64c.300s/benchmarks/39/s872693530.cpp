#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
 
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        int c = 0;
        REP(i,10){
            REP(j,10){
                REP(k,10){
                    REP(l,10){
                        if(i + j + k + l == n)
                            c++;
                    }
                }
            }
        }
        printf("%d\n",c);
    }
}