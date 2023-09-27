#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
 
//const int dx[] = {1, 0, -1, 0, 1, -1, -1, 1};
//const int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
 
int main()
{
	map<char, int> m;
	char c;
	while ((c = getchar()) != EOF){
		m[c]++;
	}

	for (char ch = 'a'; ch <= 'z'; ch++){
		cout << ch << ' ' << ':' << ' ' << m[ch] + m[ch-0x20] << endl;
	}
}

