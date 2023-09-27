#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>

using namespace std;

#define mod 1000000007

class UF
{
private:
	vector<int> root;

public:
	UF(int n)
	{
		root = vector<int>(n + 1, -1);
	}

	int getroot(int n)
	{
		if(root[n] == -1) return n;
		else return root[n] = getroot(root[n]);
	}

	void add(int x, int y)
	{
		x = getroot(x);
		y = getroot(y);
		if(x == y) return;
		if(x > y) swap(x, y);
		root[y] = x;
		return;
	}
};

int main()
{
	int n;
	cin >> n;
	priority_queue<pair<int, pair<int, int> > > qu;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int w;
			cin >> w;
			if(w >= 0){
				qu.push(make_pair(-w, make_pair(i, j)));
			}
		}
	}
	UF uf(n);
	int ans = 0;
	while(!qu.empty()){
		int cost = -(qu.top()).first;
		int x = ((qu.top()).second).first;
		int y = ((qu.top()).second).second;
		qu.pop();
		if(uf.getroot(x) == uf.getroot(y)) continue;
		ans += cost;
		uf.add(x, y);
	}
	cout << ans << endl;
	return 0;
}