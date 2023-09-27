#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<numeric>
#include<climits>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<bitset>
#define REP(i,m,n) for(int i = m; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
template<class T> void chmax(T& a, T b) { if (a < b) { a = b; } }
template<class T> void chmin(T& a, T b) { if (a > b) { a = b; } }
using namespace std;

int main(void) {
	map<char, int> alphabet;
	for (char i = 'a'; i <= 'z'; i++)
	{
		alphabet[i] = 0;
	}


	string s;
	string tmp;
	while (getline(cin, tmp)){
		s += tmp;
	}


	for (int i = 0; i < s.size(); i++)
	{
		if ('a' <= s[i] && 'z' >= s[i]) {
			alphabet[s[i]]++;
		}
		else if ('A' <= s[i] && 'Z' >= s[i]) {
			alphabet[s[i] + ('a' - 'A')]++;
		}
	}

	for (char i = 'a'; i <= 'z'; i++)
	{
		cout << i << " : " << alphabet[i] << endl;
	}
}
