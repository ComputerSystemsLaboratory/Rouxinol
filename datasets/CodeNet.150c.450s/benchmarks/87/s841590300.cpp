#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define P pair<ll,ll>
#define FOR(I,A,B) for(ll I = (A); I < (B); ++I)
#define FORR(I,A,B) for(ll I = ((B)-1); I >= (A); --I)
#define TO(x,t,f) ((x)?(t):(f))
#define SORT(x) (sort(x.begin(),x.end())) // 0 2 2 3 4 5 8 9
#define REV(x) (reverse(x.begin(),x.end())) //reverse
ll gcd(ll a,ll b){if(a<b)swap(a,b);if(a%b==0)return b;return gcd(b,a%b);}
ll lcm(ll a,ll b){ll c=gcd(a,b);return ((a/c)*(b/c)*c);}//saisyo kobaisu
#define NEXTP(x) next_permutation(x.begin(),x.end())
const ll INF=1e18+7;
const ll MOD=1e9+7;
#define pri(a) cout << (a) << endl
vector< vector<ll> > paz;
vector< vector<ll> > pazp;
ll score,N;
void pazdrop(){
	pazp = paz;
	paz = vector<vector<ll>>(N,vector<ll>(5, 0));
	FOR(i,0,5){
		ll k = N-1;
		FORR(j,0,N){
			if(pazp[j][i]!=0){
				paz[k][i] = pazp[j][i];
				k--;
			}
		}
	}
}
bool pazclear(){
	bool c = false;
	FOR(i,0,N){
		ll n = paz[i][0];
		ll k = 0;
		FOR(j,0,5){
			if(paz[i][j]==n){
				k++;
			}else{
				if(k>2&&n!=0){
					c = true;
					FOR(l,1,k+1){
						score+=paz[i][j-l];
						paz[i][j-l]=0;
					}	
				}
				k = 1;
				n = paz[i][j];
			}
		}
		if(k>2&&n!=0){
			c = true;
			FOR(l,1,k+1){
				score+=paz[i][5-l];
				paz[i][5-l]=0;
			}
		}
	}
	if(c)pazdrop();
	return c;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>N){
		if(N==0)break;
		score = 0;
		paz =  vector< vector<ll> >(N,vector<ll>(5, 0));
		FOR(i,0,N){
			FOR(j,0,5){
				cin >> paz[i][j];
			}
		}
		while(pazclear());
		cout << score << endl;
	}
}
