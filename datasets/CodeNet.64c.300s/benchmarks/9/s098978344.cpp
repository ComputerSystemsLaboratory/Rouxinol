#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define pb push_back

# define inOut(a,b) freopen(a,"r",stdin);freopen(b,"w",stdout);
# define RESET(a) memset(a,0,sizeof(a))
# define MEMO(a) memset(a,-1,sizeof(a))
# define DEBUG puts("Debug-Has-Come-Until-Here")


typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main(){
	cin.tie(NULL);
	
	ll money = 100000;
	int n, i, j;
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		money = money + (money/100 * 5);
		if (money %1000 > 0){
			money += 1000;
			money -= money % 1000;
		}
	}
	printf("%lld\n",money);

	return 0;
}