#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <queue>
#include <map>

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define f first
#define s second

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> P;

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

void pp(int (*f)[21]){
	rep(i, 21){
		rep(j, 21){
			cout << f[i][j];
		}
		cout << endl;
	}
}

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main(){
	int n;

	int dir[200] = {};
	dir['N'] = 0;
	dir['E'] = 1;
	dir['S'] = 2;
	dir['W'] = 3;

	while(cin >> n, n){
		int field[21][21] = {};
		rep(i,n){
			int x, y;
			cin >> x >> y;
			field[y][x] = 1;
		}

		int posx = 10, posy = 10;
		field[posy][posx] = 0;

		//pp(field);

		int m;
		cin >> m;
		//cout << "x:" << posx << endl;
		//cout << "y:" << posy << endl;
		rep(i, m){
			char d;
			int l;
			cin >> d >> l;
			rep(i, l){
				posx += dx[dir[d]];
				posy += dy[dir[d]];
				field[posy][posx] = 0;
			}
			//cout << "x:" << posx << endl;
			//cout << "y:" << posy << endl;
		}

		//pp(field);

		int check = 0;
		rep(i, 21){
			rep(j, 21){
				check += field[i][j];
			}
		}

		if(check == 0){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}

	}


	return 0;
}