#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int used[31];
	memset(used, 0, sizeof(used));

	rep(i, 28) {
		int x;
		cin >> x;

		used[x]++;
	}

	REP(i, 1, 31) {
		if(used[i]) continue;
		cout << i << endl;
	}

	return 0;
}