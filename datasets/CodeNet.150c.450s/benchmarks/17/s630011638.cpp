#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999

using namespace std;

typedef long long ll;


int main()
{
	int a[6];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	sort(a, a + 5,greater<int>());

	for (int i = 0; i < 4; i++) {
		cout << a[i] << " ";
	}
	cout << a[4] << endl;
	
	return 0;
}