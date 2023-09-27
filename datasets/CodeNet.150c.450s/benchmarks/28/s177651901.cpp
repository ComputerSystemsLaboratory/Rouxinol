// 
// w配列に対して, k, Pを決めて, 輸送可能な量を求める.
// 輸送可能量がWの総和以上となる最小のPを求める.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
using ll = long long;

// そもそもこの機能が難しい...
// greedyに求められないように思う...
// greedyに求められない場合にどうしたらいいのか分からない
// 全探索は場合の数が多すぎる...はず...
// 答えを見る... 解説を改めて詳しく読み直す...
// truckの台数 k もinputにするらしい
// するとgreedyに求めることができる...ということだが, これがピンとこない.
//
ll get_maximum_total_weights(const vector<ll> &w, ll k, ll P) {
	ll stacking_weight = 0;
	ll total_weight = 0;
	for(ll i=0;i<w.size();++i) {
		if(stacking_weight + w[i] <= P) {
			stacking_weight += w[i];
		} else {
			k--;
			if (k==0 || w[i] > P) break;
			stacking_weight = w[i];
		}
		total_weight += w[i];
	}
	return total_weight;
}

ll binary_search(const vector<ll> &w, ll k, ll left, ll right) {
	ll sum_of_weights = accumulate(w.begin(), w.end(), 0LL);
	ll mid;  
	// caution!
	// 間に必ず1を開けるようにしている
	while (right - left > 1) { 
		mid = (left + right) / 2;
		ll loadable_weights = get_maximum_total_weights(w, k, mid);
		//cout << left << ", " << mid << ", " << right << ": " << loadable_weights << endl;
		if (loadable_weights >= sum_of_weights) {
			right = mid;
		} else {
			left  = mid;// right - left > 1なので, midはleftよりも大きい
		}
	}
	// このrightはかならず loadable_weights >= sum_of_weights を満たす.
	return right;
}

int main() {
	int n,k;
	cin >> n >> k;
	vector<ll> w(n,0);
	for(ll i=0;i<n;++i) cin >> w[i]; 
	cout << binary_search(w, k, 0, 10000 * 1e5) << endl;
	return 0;
}

