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

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		L[0][0] = L[0][1] = L[1][0] = 0;
		string s1, s2;
		cin >> s1 >> s2;

		for (int j = 1; j <= s1.size(); j++) {
			for (int k = 1; k <= s2.size(); k++) {
				if (s1[j - 1] == s2[k - 1]) {
					L[j][k] = L[j - 1][k - 1] + 1;
				}
				else {
					L[j][k] = max(L[j-1][k],L[j][k-1]);
				}
			}
		}
		cout << L[s1.size()][s2.size()] << endl;
	}
	return	0;
}