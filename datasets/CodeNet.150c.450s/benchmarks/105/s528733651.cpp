#include<bits/stdc++.h>
#define x first
#define y second
#define pb push_back
#define eb emplace_back
#define all(a) (a).begin(),(a).end()
#define SZ(a) (int)(a).size()
#define FOR(i, a, b) for(int i=(a); i<=(b); ++i)
#define iFOR(i, a, b) for(int i=(a); i>=(b); --i)
#define make_unique(a) sort(all((a))), (a).resize(unique(all((a)))-(a).begin())

using namespace std;

typedef pair<int,int> PII;
typedef long long LL;
typedef double DD;
typedef long double LD;
typedef pair<LL,LL> PLL;
typedef pair<DD,DD> PDD;
typedef vector<int> VI;
typedef vector<LL> VL;

const int N=203;
LL num[N];
char player[N];
int n;
LL gelim[N][62];
void print(LL a){
    iFOR(i, 59, 0){
        if( (1ll<<i)&a ) printf("%d ",i);
    }
    printf("\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        memset(gelim, 0, sizeof gelim);
        scanf("%d",&n);   
        FOR(i, 1, n) scanf("%lld",&num[i]);
        scanf(" %s",player+1);
        if(player[n] != '0'){
            printf("1\n"); continue;
        }
        int ch = 1;
        iFOR(i, n, 1){
            FOR(j, 0, 59) gelim[i][j] = gelim[i+1][j];
            iFOR(j, 59, 0){
                if( (1ll<<j)&num[i] ) num[i] ^= gelim[i][j];
            }
            if(player[i]!='0'){
                if(num[i]){
                    ch = 0; break;
                }
            }else{
                iFOR(j, 59, 0){
                    if((1ll<<j)&num[i]){
                        gelim[i][j] = num[i];
                        break;
                    }
                }
            }
        }
        if(ch) printf("0\n");
        else printf("1\n");
    }
	return 0;
}
/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
