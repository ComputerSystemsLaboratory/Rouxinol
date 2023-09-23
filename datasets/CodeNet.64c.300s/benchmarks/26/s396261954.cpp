#include<iostream>
#include <list>
#include<stack>
#include<queue>
#include <vector>
#include <set>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<string>
#include <functional>
using namespace std;

#define FOR(k,m,n) for(int (k)=(m);(k)<(n);(k)++)
#define REP(i,n) FOR((i),0,(n))
#define LL long long
#define CLR(a) memset((a),0,sizeof(a))
#define SZ(x) (int((x).size()))
#define WAITING(str) int str;std::cin>>str;
#define DEBUGING(str) cout<<str<<endl
const LL INF = (1 << 30);

//毎回変える定数
#define N_MAX 200
const int MOD = 1000000007;

//素因数分解
template<typename T>
vector<T> prime_factorization(T n) 
{
	vector<T> res;
	T check = 2;

	while (check*check <= n) {
		if (n%check == 0) {
			n /= check;
			res.push_back(check);
		}
		else {
			check++;
		}
	}
	if (n != 1) res.push_back(n);
	sort(res.begin(), res.end());
	return res;
}


//繰り返し累乗法
template<typename T>
T mod_pow(T x, T n, T mod) {
	T res = 1;
	while (n > 0) {
		if (n & 1)res = (res * x) % mod;
		x = (x * x) % mod;
		n >>= 1;
	}
	return res;
}














//上に、ライブラリを作成していく。
//問題に応じて、以下を調整する。


//サブ関数
//入力
void input(LL& n,LL& m)
{
	cin >> n >> m;
}


//出力
void output(LL n,LL m)
{
	cout << mod_pow(n, m, (LL)MOD) << endl;
}

//デバッグ
void debug(){
	int N;
	cin>>N;
}


//メイン関数
int main(){
	LL n, m;
	input(n,m);
	output(n,m);
	debug();
	
	return 0;
}

