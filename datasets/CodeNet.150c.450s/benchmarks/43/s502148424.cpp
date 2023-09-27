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
int a[200000];
int b[200000];
int main(){
    while(1){
    int n;
    scanf("%d",&n);
    if(n == 0)
        break;
    REP(i,n)
        scanf("%d%d",a + i,b + i);

    int ap = 0,bp = 0;

    REP(i,n){
        if(a[i] > b[i])
            ap += a[i] + b[i];
        else if(a[i] < b[i]) 
            bp += a[i] + b[i];
        else{
            ap += a[i];
            bp += b[i];
        }
    }
    printf("%d %d\n",ap,bp);
    }
    return 0;
}