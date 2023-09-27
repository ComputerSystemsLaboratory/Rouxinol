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
const int INF = (1 << 30);

//毎回変える定数
#define N_MAX 200

//素因数分解をするアルゴリズム
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

















//上に、ライブラリを作成していく。
//問題に応じて、以下を調整する。


//サブ関数
//入力
void input(int& n)
{
	cin >> n;
}


//出力
void output(int n)
{
	cout << n << ":";
	for (auto var : prime_factorization(n)) {
		cout << " " << var;
	}
	cout << endl;
}

//デバッグ
void debug(){
	int N;
	cin>>N;
}


//メイン関数
int main(){
	int n;
	input(n);
	output(n);
	debug();
	
	return 0;
}

