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

	char dummy;
	int T, a,b, arr[35],i,n;
	for (i=1; i<=35; i++) arr[i] = i;
	
	scanf("%d", &n);
	scanf("%d", &T);
	while (T--){
		scanf("%d%c%d", &a,&dummy,&b);
		swap(arr[a], arr[b]);
	}
	for (i=1; i<=n; i++)printf("%d\n", arr[i]);
	
	return 0;
}