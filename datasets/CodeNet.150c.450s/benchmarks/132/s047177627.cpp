//include
//------------------------------------------
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

int main() {
	int n, p, cup;
	while (cin >> n >> p, n | p)
	{
		cup = p;
		vector<int> v(n, 0);
		int i = 0;
		while (true)
		{
			if (cup) {
				v[i]++;
				cup--;
			}else{
				cup = v[i];
				v[i] = 0;
			}
			if (v[i] == p)break;
			if (i++ == n - 1) i = 0;
		}
		cout << i << endl;
	}
	return 0;
}