#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
	string s, l, m;
	map<string, int> map;
	int mxl = 0;
	int tmp = 0;
	while(cin >> s){
		map[s]++;
		if(map[s] > tmp){
			m = s;
			tmp = map[s];
		}
		int tmp_s = s.size();
		if(s.size() > mxl){
			mxl = max(mxl,tmp_s);
			l = s;
		}
	}
	cout << m << " " << l << endl;
	return 0;
}