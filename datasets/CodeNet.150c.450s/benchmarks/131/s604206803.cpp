#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <queue>
#include <stack>
#include <map>
#include <cstdlib>

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> P;
typedef vector<P> vp;

void pp(vi v){
	rep(i, v.size()){
		cout << v[i] << ' ';
	}
	cout << endl;
}

void pp(vector<string> v){
	rep(i, v.size()){
		cout << v[i] << endl;
	}
}

void pp(int (*v)[20], int size = 20){
	rep(i, size){
		rep(j, size){
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
}

void pp(char (*v)[80], int size = 30){
	rep(i, size){
		rep(j, size){
			cout << v[i][j];
		}
		cout << endl;
	}
}


int check(vector<string> vs, string s){
	rep(i, vs.size()){
		if(vs[i] == s)return i;
	}
	return -1;
}


int main(){
	int a, L;
	char buf[100];
//	freopen( "b.out", "w", stdout);
	
	while(cin >> a >> L){
		if(!a && !L)break;
		sprintf(buf, "%d", a);
		string s = buf;
		while(s.size() < L){ // 先頭を0埋め
			s = '0' + s;
		}
		vector<string> v;

		v.push_back(s); // sortして
		while(true){
			sort(all(s));	// 最小
			string t = s;
			reverse(all(t));	// 最大
			sprintf(buf, "%d", atoi(t.c_str())-atoi(s.c_str()));
			s = buf;	// 最大-最小
			while(s.size() < L){ // 先頭を0埋め
				s = '0' + s;
			}
			int i = check(v, s);
			if( i != -1){// 過去に出てきてないかチェック
//				cout << "***";
				cout << i << ' ' <<  atoi(s.c_str()) << ' ' << v.size()-i << endl;
				break;
			}
			v.push_back(s);
		}
	}


	return 0;
}