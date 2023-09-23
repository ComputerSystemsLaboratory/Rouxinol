#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<functional>
#include<cmath>

using namespace std;

typedef long long ll;

int student[32];

int main()
{
	int a;
	for (int i = 0; i < 28; i++) {
		cin >> a;
		student[a] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (student[i] == 0)cout << i << endl;
	}

	return 0;
}