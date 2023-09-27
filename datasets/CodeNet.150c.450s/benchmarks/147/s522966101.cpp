#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define mod(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define forn(i,a,b) for(int i = a; i < b; i++)
#define forr(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int N; cin >> N;
	vi res(N+1,0);
	forn(x,1,100+1){
		forn(y,1,100+1){
			forn(z,1,100+1){
				int tmp = x*x+y*y+z*z+x*y+y*z+z*x;
				if(tmp <= N)res[tmp]++;
			}
		}
	}
	forn(i,1,N+1)cout << res[i] << '\n';
	return 0;
}
/*
__builtin_mul_overflow(x,y,&x)
-fsplit-stack
*/
