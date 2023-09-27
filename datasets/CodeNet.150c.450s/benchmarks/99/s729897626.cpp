#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <map>

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> P;

void p(vi v){
	rep(i, v.size()){
		cout << v[i] << ' ';
	}
	cout << endl;
}

int num[200];

int decode(string s){
	int ret = 0;
	int co = 1;
	rep(i, s.size()){
		if( s[i] >= '2' && s[i] <= '9'){
			co = s[i] - '0';
		}else{
			ret += co*num[s[i]];
			co = 1;
		}
	}
	return ret;
}

string snum = "mcxi";
string encode(int n){
	string ret;
	rep(i, 4){
		int rest = n%1000;
		int co = n/1000;

		if(co >= 1){
			if(co >= 2){
				ret += ('0' + n/1000);
			}
			ret += snum[i];
		}
		n = rest*10;
	}
	return ret;
}

void test(){
	cout << encode(decode("mcxi")) << endl;
	cout << encode(decode("2m3c4x5i")) << endl;
	cout << encode(decode("3cx5i")) << endl;
}

int main(){
	num['m'] = 1000;
	num['c'] = 100;
	num['x'] = 10;
	num['i'] = 1;

	int n;
	cin >> n;
	while(n--){
		string x, y;
		cin >> x >> y;
		//cout << "***";
		cout << encode(decode(x)+decode(y)) << endl;
	}

	return 0;
}