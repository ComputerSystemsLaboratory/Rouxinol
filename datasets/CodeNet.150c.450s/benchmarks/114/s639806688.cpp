#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int n;					//えぬ
int a[100][100] = {0};	//辺の重さ
int f[100] = {0};		//その頂点がすでに連結済みかどうか、その集団の番号
int c = 0;				//全体の重さ
int d = 1;				//次につける集団番号
int s = 0;				//選んだ本数
vector<int> w;			//木のリスト、軽いもの順
int wc = 0;				//見てる木のリストの位置

int main(){
	cin >> n;
	//まず辺の重さをaに入れる
	//wに辺のリストを入れる
	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < n; j++ ) {
			cin >> a[i][j];
			if ( a[i][j] != -1 && i < j ) w.push_back( a[i][j] );
		}
	}
	sort( w.begin(),w.end() );
	while(true) {									//n-1本選ぶまで無限ループ
		for ( int i = 0; i < n - 1; i++ ) {			// i < j を満たすように木を調べ続ける
			for ( int j = i + 1; j < n; j++ ) {
				if ( a[i][j] != w[wc] ) continue;	//その木が一番軽い木だったらそれを対象に検査を始める
				if ( f[i] > 0 && f[j] > 0 ) {		//その木の両端が両方とも連結済みだったら
					if ( f[i] != f[j] ) {
						int y = f[j];
						for ( int x = 0; x < n; x++ ) {
							if ( f[x] == y ) f[x] = f[i];
						}
						c += a[i][j];
						s++;
					}
				}else if ( f[i] == 0 && f[j] == 0 ) {
					f[i] = d;
					f[j] = d;
					d++;
					c += a[i][j];
					s++;
				}else {
					if ( f[i] == 0 ) {
						f[i] = f[j];
						c += a[i][j];
						s++;
					}else {
						f[j] = f[i];
						c += a[i][j];
						s++;
					}
				}
				wc++;
				a[i][j] = -1;
				if ( s == n-1 ) break;
			}
			if ( s == n-1 ) break;
		}
		if ( s == n-1 ) break;
	}
	cout << c << endl;
	return 0;
}