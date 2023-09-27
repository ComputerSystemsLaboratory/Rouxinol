//終局から考える。
//S[i] = '1'なるiについて、A[i]が{A[j], i+1≦j≦N-1, S[j] = '0'}と独立ならx≠0.
//全て従属とする。iが大きい方から考えると、最終的にx=0(従属)にできる。
//独立性の判定:
//・各数を2進数ベクトルと考えて {A[j], i+1≦j≦N-1, S[j] = '0'}について掃き出し法をおこない、
//  表現できるベクトル集合が同一のより単純な表現に直す
//・その表現では'1'の立つ最上位ビットの場所がdistinctだから、A[i]を作れるかを貪欲に判定できる
//計算量はO(TN^3). 厳しい？ -> 定数倍が軽いので大丈夫そう. 
//0ベクトルを取り除かない上に、S[i] = '1'なるiについてもA[i]を追加してしまったバージョン
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for(i = 0; i < n; i++)
#define int long long
using namespace std;
 
void sweep(vector<int> &vs) {
	int n = vs.size();
	int row = 0;
	
	for (int i = 59; i >= 0; i--) {
		int pipot = -1;
		for (int j = row; j < n; j++) {
			if ((vs[j] >> i) & 1) {
				pipot = j;
				break;
			}
		}
		if (pipot == -1) continue;
		swap(vs[row], vs[pipot]);
		
		for (int j = row + 1; j < n; j++) {
			if ((vs[j] >> i) & 1) {
				vs[j] ^= vs[row];
			}
		}
		row++;
	}
}
 
int solve(vector<int> a, string s) {
	int n = a.size();
	
	vector<int> vs;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '0') {
			vs.push_back(a[i]);
		}
		else {
			sweep(vs);
			int val = a[i];
			for (int j = 0; j < vs.size(); j++) {
				if ((val ^ vs[j]) < val) {
					val ^= vs[j];
				}
			}
			if (val != 0) return 1;
            vs.push_back(a[i]);
		}
	}
	return 0;
}
 
signed main() {
	int T;
	cin >> T;
	while (T--) {
		int i, n; cin >> n;
		vector<int> a(n);
		rep(i, n) cin >> a[i];
		string s; cin >> s;
		cout << solve(a, s) << endl;
	}
	return 0;
}