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
	int n, m;
	cin >> n >> m;
	UF uf(n);
	for(int i = 0; i < m; i++){
		int s, t;
		cin >> s >> t;
		uf.add(s, t);
	}
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int s, t;
		cin >> s >> t;
		if(uf.getroot(s) == uf.getroot(t)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}