#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>
#include<limits>
#include<iterator>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define rep(i,n) for(int i=0; i<n; i++)
#define INF (1<<20)

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ll, char> plc;

int L[1010][1010];

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i <= s1.size(); i++)
		L[i][0] = i;
	for (int i = 0; i <= s2.size(); i++)
		L[0][i] = i;

	for (int i = 1; i <= s1.size(); i++) {
		for (int j = 1; j <= s2.size(); j++) {
			int diff = (s1[i - 1] == s2[j - 1]) ? 0 : 1;
			L[i][j] = min(L[i-1][j-1]+diff,min(L[i-1][j]+1,L[i][j-1]+1));
		}
	}
	cout << L[s1.size()][s2.size()] << endl;
}