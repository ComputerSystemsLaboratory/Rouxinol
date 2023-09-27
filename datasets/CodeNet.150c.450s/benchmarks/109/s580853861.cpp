#include<bits/stdc++.h>
#define INF 2000000000
#define int long long int
#define MOD 1000000007
#define pb push_back
#define cin1(n) (cin >> n)
#define cin2(a,b) (cin >> a >> b)
#define cin3(a,b,c) (cin >> a >> b >> c)
#define cout(n) (cout << n << endl)
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define fr first 
#define sc second 
#define EPS (1e-10)

using namespace std;

typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<pair<int,int>> vpii;
typedef vector<string> vs;
typedef vector<vector<string>> vss;
typedef pair<int,int> pii;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n,m;
int a,b;
int p,q;

pii input(string t1,string t2) {
	int ret1,ret2;

	ret1 = stoi(t1.substr(6,2)) + 60 * stoi(t1.substr(3,2)) + 60 * 60 * stoi(t1.substr(0,2));
	ret2 = stoi(t2.substr(6,2)) + 60 * stoi(t2.substr(3,2)) + 60 * 60 * stoi(t2.substr(0,2));
	return make_pair(ret1,ret2);
}

signed main() {

	while(1) {
		cin1(n);
		if (n == 0) break;

		vpii table(n,make_pair(0,0));
		rep(i,0,n) {
			string time1,time2;
			cin2(time1,time2);
			table[i] = input(time1,time2);	
			//cout << table[i].fr << " " << table[i].sc << endl;
		}

		sort(table.begin(),table.end());
		
		int idx = 0;
		vector<pair<bool,int>> train;
		train.pb(make_pair(true,0));
		rep(i,0,60*60*24) {
			//std::cout << "table.fr " << table[idx].fr <<  std::endl;
			rep(j,0,train.size()) {
				if (train[j].sc == i) {
					//cout << "j = " << j << endl;
					//cout << "i = " << i << endl;
					train[j].fr = true;
					train[j].sc = 0;
				}
			}
			if (table[idx].fr == i) {
				//cout << "idx = " << idx << endl;
				//cout << "i = " << i << endl;
				//cout(table[idx].fr);
				bool flag = false;
				rep(j,0,train.size()) {
					if (train[j].fr) {
						train[j].fr = false;
						train[j].sc = table[idx].sc;
						flag = true;
						break;
					}
				}
				if (!flag) {
					train.pb(make_pair(false,table[idx].sc));
				}
				idx++;
				i--;
			}
		}
		cout(train.size());
	}

	return 0;
}