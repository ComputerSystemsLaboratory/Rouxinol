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
	
	int a,b,c,d, n, hitung = 0;
	while(scanf("%d", &n) != EOF){
		hitung = 0;
		for (a=0; a<=9; a++)
			for (b=0; b<=9; b++)
				for (c=0; c<=9; c++)
					for (d=0; d<=9; d++)
						if (a+b+c+d == n)hitung++;
		printf("%d\n", hitung);
	}
	

	return 0;
}