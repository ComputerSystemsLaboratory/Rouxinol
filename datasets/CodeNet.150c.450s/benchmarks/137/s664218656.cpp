
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

map<string, int> m;

int main() {
	int n;
	cin >> n;
	char inp[8];

	rep(i, n) {
		string word;
		scanf("%s", inp);
		cin >> word;

		if (inp[0] == 'i') {
			m[word] = 1;
		}
		else {
			if (m.find(word) != m.end()) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}