#include <bits/stdc++.h>
using namespace std;
const int dx[]={1,0,0,-1,1,-1,-1,1};
const int dy[]={0,1,-1,0,1,1,-1,-1};
const int INF = 1<<30;
const double EPS = 1e-8;
#define PB push_back
#define mk make_pair
#define fr first
#define sc second
#define reps(i,j,k) for(int i = (j); i < (k); ++i)
#define rep(i,j) reps(i,0,j)
#define MOD 1000000007
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> Pii;
typedef pair<int,vi > P;
typedef long long ll;
int coin[25];
int N,M;

int memo[21][50001];

int solve(int idx,int money){
    //printf("%d %d\n",idx,money);
    
    if(memo[idx][money]){
        return memo[idx][money];
    }

    if(money == N){
        return 0;
    }
    if(idx == M){
        return INF;
    }


    int ret = INF;

    reps(i,idx,M){
        if(money + coin[i] > N)continue;
        ret = min(ret,solve(i,money+coin[i]) + 1);
    }

    return memo[idx][money] = ret;

}

int main(){
    scanf("%d%d",&N,&M);
    

    rep(i,M){
        scanf("%d",&coin[i]);
    }
    sort(coin,coin+M);

    printf("%d\n",solve(0,0));

    return 0;
}