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

void pp(int (*v)[1000], int size = 10){
	rep(i, size){
		rep(j, size){
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
}

bool prime[1000000];

int main(){
	rep(i, 1000000) prime[i] = true;
	prime[0] = prime[1] = false;
	FOR(i, 2, 1000000){
		if(prime[i]){
			for(int j = i*2; j < 1000000; j+=i){
				prime[j] = false;
			}
		}
	}

	int a, d, n;
	while(cin >> a >> d >> n){
		if(!a&!d&!n)break;

		int cnt = 0;
		while(true){
			if(prime[a]) cnt++;
			if(cnt == n) break;
			a += d;
		}
		cout << a << endl;
	}

	return 0;
}