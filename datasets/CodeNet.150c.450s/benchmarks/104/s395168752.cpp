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
    int w,n;
    int a[50],b[50],ans[50];
    scanf("%d%d",&w,&n);
    REP(i,n)
        scanf("%d,%d",a + i,b + i);

    FOR(i,1,w + 1){
        int now = i;
        REP(j,n){
            if(now == a[j])
                now = b[j];
            else if(now == b[j])
                now = a[j];
        }
        ans[now] = i;
    }
    FOR(i,1,w + 1)
        printf("%d\n",ans[i]);
    return 0;
}