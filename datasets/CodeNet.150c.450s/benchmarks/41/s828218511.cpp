#include <bits/stdc++.h>
using namespace std;
 
/*????????????????????????*/
struct edge {int to,cost;};
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> VI;
typedef vector<edge> VE;
//static const int INF = 2147483647;
//static const int INF = 1000000000;
//static const int INf = 9223372000000000000;
static const long long INF = 9223372000000000000/2;
static const int NIL = -1;
static const int MOD = 1000000007;
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define np next_permutation
#define pq priority_queue
/* t y p o ??£ ??? ??\ ??£ ??? ??? ??\ ??? ??? */
#define itn int
#define scnaf scanf
#define reutnr return
#define scamf scanf
//int dx4[4] = {0,1,0,-1}, dy4[4] = {-1,0,1,0};
//int dx5[5] = {-1,0,0,0,1}, dy5[5] = {0,-1,0,1,0};
//int dx8[8] = {-1,0,1,1,1,0,-1,-1}, dy8[8] = {1,1,1,0,-1,-1,-1,0};
//int dx9[9] = {-1,0,1,1,1,0,-1,-1,0}, dy9[9] = {1,1,1,0,-1,-1,-1,0,0};
#define int ll

const int NMAX = 100;

int n,m;
int d[NMAX+10][NMAX+10];

void intialize(){
    for(int i=0;i<NMAX;i++){
        for(int j=0;j<NMAX;j++) d[i][j] = INF;
    }
    for(int i=0;i<NMAX;i++) d[i][i] = 0;
}

void WF(){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) if(d[i][k] != INF && d[k][j] != INF) d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
        }
    }
}

void output(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(d[i][j]==INF) printf("INF");
            else printf("%d",d[i][j]);
            if(j!=n-1) printf(" ");
        }
        printf("\n");
    }
}

void input(){
    for(int i=0;i<m;i++){
        int tmp1,tmp2,tmp3;
        scanf("%lld %lld %lld",&tmp1,&tmp2,&tmp3);
        //tmp1--; tmp2--;
        d[tmp1][tmp2] /*= d[tmp2][tmp1] */= tmp3;
    }
}

void solve(){
    for(int i=0;i<n;i++){
        if(d[i][i]<0){
            printf("NEGATIVE CYCLE\n");
            return;
        }
    }
    
    output();

    return;
}

signed main(){
    scanf("%lld %lld",&n,&m);

    intialize();

    input();

    WF();

    solve();

    return 0;
}