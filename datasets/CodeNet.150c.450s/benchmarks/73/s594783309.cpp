#include <bits/stdc++.h>
using namespace std;

template <class T = long long>
struct BIT {
	//もとの配列a[i]はBIT内部ではvec[i+1]に対応
	vector<T> vec;
	int n;
	int pw2 = 1;  // n以下の最大の2冪
	BIT(int sz) : vec(sz + 1, 0), n(sz) {
		while(pw2 * 2 <= n) {
			pw2 *= 2;
		}
	}
	//元の値に足す 更新は不可
	void add(int place, T val, bool index = 0) {
		if(!index) place++;
		for(int x = place; x <= n; x += x & -x) vec[x] += val;
	}
	//端からの合計値計算
	T sum0(int a, bool index = 0) {
		if(index) a--;
		T ret = 0;
		for(int x = a; x > 0; x -= x & -x) ret += vec[x];
		return ret;
	}
	//クエリ
	T sum(int a, int b) { return sum0(b) - sum0(a); }
	//更新 クエリと併用で可能にした
	void update(int place, T val, bool index = 0) {
		T old = sum(place, place + 1);
		add(place, val - old);
		return;
	}
	int LowerBound(T val, int start = 0) {
		// startから足していって初めてval以上になる箇所を0-indexedで返す
		// 要素が全て非負のときのみ
		// [start, ret) >= val を満たすstart以上の最小のret
		// どこまで足してもvalに達しないときはn+1を返す
		if(val <= 0) return start;
		val += sum0(start);
		int x = 0;
		for(int k = pw2; k > 0; k /= 2) {
			if(x + k <= n && vec[x + k] < val) {
				val -= vec[x + k];
				x += k;
			}
		}
		return max(start, x + 1);
	}
	int UpperBound(T val, int start = 0) {
		// startから足していって初めてvalより大になる箇所を0-indexedで返す
		// 要素が全て非負のときのみ
		// [start, ret) > val を満たすstart以上の最小のret
		// どこまで足してもvalより大に達しないときはn+1を返す
		if(val < 0 /*LBとの変更点*/) return start;
		val += sum0(start);
		int x = 0;
		for(int k = pw2; k > 0; k /= 2) {
			if(x + k <= n && vec[x + k] <= /*LBとの変更点*/ val) {
				val -= vec[x + k];
				x += k;
			}
		}
		return max(start, x + 1);
	}
};

int main() {
	// https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_2_B
	int n, q;
	cin >> n >> q;
	BIT<int> b(n);
	for(int i = 0; i < q; i++) {
		int com, x, y;
		cin >> com >> x >> y;
		if(com) {
			cout << b.sum(x - 1, y) << endl;
		} else {
			b.add(x - 1, y);
		}
	}
}
