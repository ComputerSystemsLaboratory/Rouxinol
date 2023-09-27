#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define P pair<ll,ll>
#define FOR(I,A,B) for(ll I = int(A); I < int(B); ++I)
#define FORR(I,A,B) for(ll I = int((B)-1); I >= int(A); --I)
#define TO(x,t,f) ((x)?(t):(f))
#define SORT(x) (sort(x.begin(),x.end())) // 0 2 2 3 4 5 8 9
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin()) //xi>=v  x is sorted
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin()) //xi>v  x is sorted
#define NUM(x,v) (POSU(x,v)-POSL(x,v))  //x is sorted
#define REV(x) (reverse(x.begin(),x.end())) //reverse
ll gcd(ll a,ll b){if(a<b)swap(a,b);if(a%b==0)return b;return gcd(b,a%b);}
ll lcm(ll a,ll b){ll c=gcd(a,b);return ((a/c)*(b/c)*c);}//saisyo kobaisu
#define NEXTP(x) next_permutation(x.begin(),x.end())
const ll INF=1e18+7;
const ll MOD=1e9+7;


string to_mcxi(int x){
	string ans;
	if( int(x/1000) > 1 ){
		ans += '0'+int(x/1000);
		ans += 'm';
	}else if( int(x/1000) == 1 ){
		ans += 'm';
	}
	x = x%1000;
	if( int(x/100) > 1 ){
		ans += '0'+int(x/100);
		ans += 'c';
	}else if( int(x/100) == 1 ){
		ans += 'c';
	}
	x = x%100;
	if( int(x/10) > 1 ){
		ans += '0'+int(x/10);
		ans += 'x';
	}else if( int(x/10) == 1 ){
		ans += 'x';
	}
	x = x%10;
	if( x > 1 ){
		ans += '0'+x;
		ans += 'i';
	}else if( x == 1 ){
		ans += 'i';
	}
	return ans;
}

int to_int(string x){
	vector<char> m={'m','c','x','i'};
	vector<int> mm={1000,100,10,1};
	int ans=0,p=1;
	FOR(i,0,x.size()){
		if(x[i]>='0'&&x[i]<='9'){
			p = x[i]-'0';
		}else{
			FOR(j,0,4){
				if(x[i]==m[j]){
					ans += p*mm[j];
					p = 1;
				}
			}
		}
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	ll n;
	cin >> n;
	FOR(i,0,n){
		string a,b;
		cin >> a >> b;
		cout << to_mcxi(to_int(a)+to_int(b)) << endl;
	}

}

