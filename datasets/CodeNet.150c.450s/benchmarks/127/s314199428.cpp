#ifndef _WIN32
#include<iostream>
#endif

using namespace std;
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<iomanip>
#include<stack>
#include<set>
#include<functional>
#include<map>

#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()

const int dr[] = { 0, 1, 0, -1 };
const int dc[] = { 1, 0, -1, 0 };

typedef pair<int, int> P;
int main(){
	int N; cin >> N;
	REP(_, N){
		set<string> memo;
		string s;
		cin >> s;
		int len = s.size();
		FOR(i, 1, len){
			string a = s.substr(0,i);
			string b = s.substr(i, len - i);
			auto c = a;
			auto d = b;
			reverse(ALL(c));
			reverse(ALL(d));
			memo.insert(a + b);
			memo.insert(a + d);
			memo.insert(c + b);
			memo.insert(c + d);
			memo.insert(b + a);
			memo.insert(d + a);
			memo.insert(b + c);
			memo.insert(d + c);


		}
		cout << memo.size()<<endl;
	}
	return 0;
}