#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<random>
#include<functional>
#include<algorithm>
#include<cstdio>
#include<bitset>
#include<unordered_map>
using namespace std;
//---------------------------------------------------
//ライブラリゾーン！！！！
typedef long long ll;
typedef long double ld;
#define str string
#define rep(i,j) for(ll i=0;i<(long long)(j);i++)
#define all(a) (a).begin(),(a).end()
const ll Mod = 1000000007;
const ll gosenchou = 5000000000000000;
short gh[2][4] = { { 0,0,-1,1 },{ -1,1,0,0 } };
struct P {
	ll pos, cost;
};
bool operator<(P a, P b) { return a.cost < b.cost; }
bool operator>(P a, P b) { return a.cost > b.cost; }
struct B {//隣接リスト表現
	ll to, cost;
};
struct E {//辺の情報を入れる変数
	ll from, to, cost;
};
bool operator<(E a, E b) {
	return a.cost < b.cost;
}
struct H {
	ll x, y;
};
bool operator<(H a, H b) {
	if (a.x != b.x) return a.x < b.x;
	return a.y < b.y;
}
bool operator>(H a, H b) {
	if (a.x != b.x) return a.x > b.x;
	return a.y > b.y;
}
bool operator==(H a, H b) {
	return a.x == b.x&&a.y == b.y;
}
bool operator!=(H a, H b) {
	return a.x != b.x || a.y != b.y;
}
ll gcm(ll i, ll j) {//最大公約数
	if (i > j) swap(i, j);
	if (i == 0) return j;
	return gcm(j%i, i);
}
ld rad(H a, H b) {
	return sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y, 2.0));
}//rad＝座標上の2点間の距離
ll ari(ll a, ll b, ll c) {
	return (a + b)*c / 2;
}//等差数列の和
ll fact(ll x, ll k, ll p) {//最大値、個数、あまり
	ll sum = 1;
	for (int i = 0; i < k; i++) {
		sum *= (x--);
		sum %= p;
	}
	return sum;
}//階乗(正）
ll mod_pow(ll x, ll n, ll p) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) res = res*x%p;
		x = x*x%p;
		n >>= 1;
	}
	return res;
}//x^n%p
int ctoi(char a) {
	return (int)a - '0';
}
const long long Inf = 4523372036854775807;
//----------------------------------------------------
//++++++++++++++++++++++++++++++++++++++++++++++++++++

int bit[200001],n,q;
int sum(int x){
	int sum=0;
	while(x>0){
		sum+=bit[x];
		x-=x&-x;
	}
	return sum;
}
void add(int i,int x){
	while(i<=n){
		bit[i]+=x;
		i+=i&-i;
	}
}
signed main() {
	cin>>n>>q;
	for(int i=0;i<q;i++){
		int com,x,y;
		cin>>com>>x>>y;
		if(com==0){
			add(x,y);
		}
		else{
			if(x==0) cout<<sum(y)<<endl;
			else cout<<sum(y)-sum(x-1)<<endl;
		}
	}
	getchar();getchar();
}

