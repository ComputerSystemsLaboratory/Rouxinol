#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))
#define ALL(c) (c).begin(), (c).end()
#define dump(a) cerr << #a << "=" << (a) << endl

using namespace std;

int main() {
	int N,M;
	bool is_open=false;
	vector<string> ids;
	string id;

	cin >> N;
	rep(i,N) {
		cin >> id;
		ids.push_back(id);
	}

	cin >> M;
	bool is_id = false;
	rep(i,M) {
		cin >> id;
		is_id = false;
		rep(j,ids.size()) {
			if (ids[j] == id) {
				is_id = true;
				is_open = !is_open;
				break;
			}
		}

		if (is_id) { //IDがあるとき
			if (is_open) {
				cout << "Opened by " + id << endl;
			}
			else {
				cout << "Closed by " + id << endl;
			}
		}
		else {
			cout << "Unknown " + id << endl;
		}
	}

	return 0;
}