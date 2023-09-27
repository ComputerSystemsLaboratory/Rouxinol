
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

map<string, int> table;

int main()
{
	string word, frequent, longest="";
	int n = 0;
	while (cin >> word) {
		table[word]++;
		if (table[word] > n) {
			n = table[word];
			frequent = word;
		}
		if (word.size() > longest.size()) {
			longest = word;
		}
	}
	cout << frequent << " " << longest << endl;
	return 0;
}