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


int llist[10000];
int main(void){
    int n,m,cou = 0,l;

    scanf("%d",&n);
    REP(i,n){
        scanf("%d",&llist[i]);
    }

    REP(i,n){
        if(llist[i] > 2){
            m = sqrt(llist[i]);

            l = 1;
            REP(j,m - 1)
                if(llist[i] % (j + 2) == 0){
                    l = 0;
                    break;
                }
            cou += l;
        }else
            cou += (llist[i] == 2);
    }
    printf("%d\n",cou);
}