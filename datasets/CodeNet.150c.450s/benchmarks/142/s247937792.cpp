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


#define si cout << "Yes\n";
#define no cout << "No\n";

ld get(int l,int r,vector<ld> &ac){
	ld res = ac[r];
	if(l-1 >= 0)res -= ac[l-1];
	return res;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int N,K; cin >> N >> K;
	vector<ld> ac(N);
	forn(i,0,N){
		ld x; cin >> x;
		ac[i] = x;
		if(i)ac[i] += ac[i-1];
	}
	vector<ld> res;
	forn(i,0,N){
		if(i-K+1 >= 0){
			res.pb(get(i-K+1,i,ac));
		}
	}
	forn(i,1,(int)res.size()){
		if(res[i] > res[i-1]){
			si;
			continue;
		}
		no;
	}
	return 0;
}
/*
__builtin_mul_overflow(x,y,&x)
-fsplit-stack
*/
