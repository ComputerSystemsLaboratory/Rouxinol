#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#include<sstream>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))
#define ALL(c) (c).begin(), (c).end()
#define dump(a) cerr << #a << "=" << (a) << endl
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;
template<class T> void chmin(T &t, T f) { if (t > f) t = f; } //t=min
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } //t=max
using namespace std;

int main() {
	int N = 0;
	int cnt=0;
	string a_str;
	string ashi_str[4] = {"lu","ru","ld","rd"};

	while(cin >> N) {
		bool is_up = false;
		vector<bool> ashi(2,false);
		cnt = 0;
		if (N == 0) { break; }
		rep(i,N) {
			cin >> a_str;
			if (a_str == ashi_str[0]) {
				ashi[0]=true; //left up
			}
			else if (a_str == ashi_str[1]) {
				ashi[1]=true; //right up
			}
			else if (a_str == ashi_str[2]) {
				ashi[0]=false; //left down
			}
			else if (a_str == ashi_str[3]) {
				ashi[1]=false; //right down
			}
			if (ashi[0]==true && ashi[1]==true && is_up==false) {
				is_up = true;
				cnt++;
			}
			if (ashi[0]==false && ashi[1]==false && is_up==true) {
				is_up = false;
				cnt++;
			}
			//cout << "D " << cnt << endl; 
		}
		cout << cnt << endl;
	}

	return 0;
}