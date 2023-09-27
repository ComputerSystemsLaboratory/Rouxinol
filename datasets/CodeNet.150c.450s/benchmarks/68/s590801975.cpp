#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//	データセットの終わりを処理したら0,
//	それ以外なら1を返す関数
//	問題を解く部分
int solve();

int main() 
{
	while(solve()){}
	return 0;
}

int solve() 
{
	//	入力ここから
	int n;
	cin >> n;
	if(!n) { return 0; }
	
	vector<int> a(n);
	for(int& i: a)
		cin >> i;
	//	入力ここまで
	
	//	差の絶対値の最小値を調べる
	//	全探索でO(n^2)
	
	int ans = 1000000+1;
	for(int i = 0; i < n; i++)
		for( int j = i + 1; j < n; j++)
			ans = min( abs(a[i]-a[j]), ans);
			
	//	出力
	cout << ans << endl;
	
	return 1;
}
