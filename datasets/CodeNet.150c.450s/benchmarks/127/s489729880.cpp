#include<iostream>
#include<map>
#include<vector>
#include<set>
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
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; }     cout << "}" << endl; 

template<class T> void chmin(T &t, T f) { if (t > f) t = f; } //t=min
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } //t=max

using namespace std;

vector<string> train_names;

void pusher(string left_str, string right_str) {
	string reve_left_str = left_str;
	string reve_right_str = right_str;
	reverse(ALL(reve_left_str));
	reverse(ALL(reve_right_str));

	train_names.push_back(left_str + right_str);
	train_names.push_back(reve_left_str + right_str );
	train_names.push_back(left_str + reve_right_str );
	train_names.push_back(reve_left_str + reve_right_str);
}

int main() {
	int M;
	int left_len=0,right_len=0;
	string train_name;

	cin >> M;
	rep(m,M) {
		cin >> train_name;
		train_names.clear();
		REP(i,1,train_name.size()) {
			left_len = i;
			right_len = train_name.size() - i;
			string left_str(train_name,0,left_len);
			string right_str(train_name,left_len,right_len);

			pusher(left_str,right_str);
			pusher(right_str,left_str);
		}

		set<string> set_train_names(ALL(train_names));
		cout << set_train_names.size() << endl;
	}

	return 0;
}