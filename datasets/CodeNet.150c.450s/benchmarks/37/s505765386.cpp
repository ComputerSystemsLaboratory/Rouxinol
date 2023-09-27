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
    int a,b,c,d,e,f;

    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f) != EOF){
        double x = (c * e - b * f) / (double)(a * e - b * d);
        double y = (a * f - c * d) / (double)(a * e - b * d);

        if(-1e-3 < x && x < 1e-3)
            x = 0.0;
        if(-1e-3 < y && y < 1e-3)
            y = 0.0;
        printf("%0.3lf %0.3lf\n",x,y);
    }
    return 0;
}