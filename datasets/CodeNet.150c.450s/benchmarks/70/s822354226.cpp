
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0027&lang=jp

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

using namespace std;
template<class T> inline void chmax(T& a, T b) { if(b > a) a = b; }
template<class T> inline void chmin(T& a, T b) { if(b < a) a = b; }

int main() {
	int year = 2004;
	int month,day;
	string week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	while(true) {
		cin >> month >> day;
		if (month == 0 && day == 0) { break; }
		int month_ = month;
		if(month < 3){ year--; month_+=12; }
		if(month_ == 14){ day += 1; }
		int w = ((year + (year/4) - (year/100) + (year/400) + (((13 * month_) + 8)/5) + day) % 7);
		cout << week[w] << endl;
	}
	
	return 0;
}