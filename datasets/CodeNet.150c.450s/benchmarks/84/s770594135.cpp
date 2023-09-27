#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
const int N = 200010;
struct BIT{
	ll bit[200100];
	void add(int i,int x){
		i++;
		while(i<=N){
			bit[i]+=x;
			i += i&-i;
		}
	}
	ll sum(int i){
		i++;
		ll ret=0;
		while(i>0){
			ret+=bit[i];
			i -= i&-i;
		}
		return ret;
	}
}bit;
int n;
int a[200100];
vector<int> zip;
int main(){
	cin >> n;
	for(int i=0;i<n;i++)cin >> a[i];
	for(int i=0;i<n;i++)zip.pb(a[i]);
	sort(all(zip));
	for(int i=0;i<n;i++)a[i]=lower_bound(all(zip),a[i])-zip.begin();
	ll ans  = 0ll;
	for(int i=0;i<n;i++){
		ans += i-bit.sum(a[i]);
		bit.add(a[i],1);
	}
	cout << ans << endl;
	return 0;
}