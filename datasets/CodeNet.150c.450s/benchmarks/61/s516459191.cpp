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
#define all(c) (c).begin(), (c).end()
#define dump(a) cerr << #a << "=" << (a) << endl

using namespace std;

int main() {
	int N,A,B,C,X;
	int Y;
	vector<int> ys;
	int check_cnt;
	int ii;
	
	while(cin >> N >> A >> B >> C >> X) 
	{
		if (N==0 && A==0 && B==0 && C==0 && X==0) { break; }
		ii=0;
		ys.clear();
		rep(i,N) {
			cin >> Y;
			ys.push_back(Y);
		}
		rep(i,10001) {
			if (ys.empty()) { break; }
			else if (X == ys.front()) {
				ys.erase(ys.begin());
				ii=i;
			}
			X = (A * X + B) % C;
		}
		if (ys.empty()) {
			cout << ii << endl;
		}
		else { cout << -1 << endl; }
	}


	return 0;
}