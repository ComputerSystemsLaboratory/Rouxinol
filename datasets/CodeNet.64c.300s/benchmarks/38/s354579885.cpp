#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

//global
const int MAX_N = 10;
int a[MAX_N];



bool dfs(int i, int b, int c) {
	if (i == MAX_N)return true;
	if (b < a[i] && dfs(i + 1, a[i], c))return true;
	if (c < a[i] && dfs(i + 1, b, a[i]))return true;
	return false;

}


//solve
void solve()
{
	int b = a[0];
	int c = 0;
	cout << (dfs(1, b, c) ? "YES" : "NO") << endl;
}



//main
int main()
{
	int tcase;
	cin >> tcase;
	while (tcase--) {
		for (int i = 0; i < 10; i++) {
			cin >> a[i];
		}
		solve();
	}
    return 0;
}