#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

int N;
int K;

int kazoeru(ll p, v1 w){
	int j = 0;
	rep(i, K){
		ll sum = 0;
		while(1){
			if(sum + w.at(j) > p) break;
			sum += w.at(j);
			j++;
			if(j == N) return N;
		}
	}
	return j;
}

int main(){
	cin >> N;
	cin >> K;
	v1 w(N);
	ll sum = 0;
	rep(i, N){
		int c;
		scanf("%d", &c);
		w.at(i) = c;
		sum += c;
	}
	int left = 0;
	int right = sum +1;
	ll ans;
	while(left+1 < right){
		ll p = (right + left)/2;
		int v = kazoeru(p, w);
		if(v >= N){
			right = p;
		}else if(v < N){
			left = p;
		}
	}
	ans = right;
	cout << ans << endl;
}

