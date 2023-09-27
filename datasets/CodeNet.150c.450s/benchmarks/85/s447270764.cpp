#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

template <typename TYPE>
void print_vec(const vector<TYPE>& v){
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

template <typename TYPE>
void print_vec2(const vector<vector<TYPE>>& v){
  cout << endl; cout << "       ";
  for(int i=0; i<v[0].size(); i++) cout << i << "   "; 
  cout << endl;
	for(int i=0; i<v.size(); i++){
		cout << "i=" << i << ":   ";
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j] == 0) cout << "\x1B[0m" << v[i][j] << "   ";
      else cout << "\x1B[31m" << v[i][j] << "   ";//https://stackoverrun.com/ja/q/12618775
		}
		cout << "\x1B[0m" << endl;
	}
}
 
ll chmin(ll &a, ll b) {return a = min(a, b);}

int main(){
	int n;
	cin >> n;
	vector<ll> row(n), col(n);// 計算に使うんでllにしときます
	for(int i=0; i<n; i++) cin >> row[i] >> col[i];
	const ll INF = 100100100100100;
	// dp[l][r]: 区間[l,r]の行列の積を計算するのに必要なスカラー乗算の最小回数 
	// ll ans = dp[0][n-1] となるよ
	vector<vector<ll>> dp(n+1, vector<ll>(n+1, INF));
	
	//初期化
	for(int l=0; l<n; l++){
		dp[l][l] = 0;//行列1つだけじゃあ計算回数は0
	}

	for(int w=1; w<n; w++){
		for(int l=0; l+w<n; l++){
			int r = l+w;
			for(int mid=l; mid<r; mid++){// 結合する位置をずらしていく
				ll num = row[l] * col[mid] * col[r];// a×b と b×c の計算回数は a * b * c
				num = row[l] * row[mid+1] * col[r];//こっちでもよい
				chmin(dp[l][r], dp[l][mid] + num + dp[mid+1][r]);// 例  a×b と b×c　と c×d　の計算回数は a*b*c + a*c*d 　と  b*c*d + a*b*d  の小さいほう 
			}
		}
	}

	cout << dp[0][n-1] << endl;
}

