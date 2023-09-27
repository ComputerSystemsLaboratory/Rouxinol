#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <string>
#include <algorithm>
#include <utility>
#define llint long long
#define inf 1e18
#define rep(x, s, t) for(llint (x) = (s); (x) < (t); (x)++)
#define Rep(x, s, t) for(llint (x) = (s); (x) <= (t); (x)++)
#define chmin(x, y) (x) = min((x), (y))
#define chmax(x, y) (x) = max((x), (y))

using namespace std;
typedef pair<llint, llint> P;

llint T;
llint n;
llint a[205];
string s;

void GaussianElimination(llint a[], int n)
{
	llint r = 0;
	for(int i = 59; i >= 0 && r < n; i--){ //上位ビットから見ていく
		if((a[r]&(1LL<<i)) == 0){
			int p = -1;
			for(int j = r+1; j < n; j++){
				if(a[j] & (1LL<<i)){
					p = j;
					break;
				}
			}
			if(p == -1) goto end;
			swap(a[r], a[p]);
		}
		for(int j = 0; j < n; j++){
			if(j == r) continue;
			if(a[j]&(1LL<<i)) a[j] ^= a[r];
		}
		r++;
		end:;
	}
}

llint b[205];

llint get(llint x)
{
	llint ret = 0;
	for(int i = 0; i < 60; i++){
		if(x & (1LL<<i)) ret++;
	}
	return ret % 2;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> T;
	for(int t = 1; t <= T; t++){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		cin >> s;
		s = "#" + s;
		
		llint sum, pos;
		for(int i = 1; i <= n; i++){
			if(s[i] == '0') continue;
			llint p = 0;
			for(int j = i+1; j <= n; j++){
				if(s[j] == '0'){
					b[p] = a[j];
					p++;
				}
			}
			if(p == 0){
				cout << 1 << endl;
				goto end;
			}
			GaussianElimination(b, p);
			
			/*for(int j = 0; j < p; j++){
				cout << j << " " << b[j] << endl;
			}
			cout << endl;*/
			
			sum = pos = 0;
			for(int j = 59; j >= 0; j--){
				if((sum^a[i]) & (1LL<<j)){
					for(; pos<p; pos++){
						if(b[pos] & (1LL<<j)) break;
					}
					sum ^= b[pos];
				}
			}
			if(sum != a[i]){
				cout << 1 << endl;
				goto end;
			}
		}
		cout << 0 << endl;
		end:;
	}
	
	return 0;
}