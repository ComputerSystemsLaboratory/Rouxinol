#include<iostream>
#include<cstdio>
#include<math.h>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<set>
#include<map>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;

int n;
int a[2100000];
int b[2100000];
int c[10500];

void CountingSort(int k)
{
	for (int i = 0; i <= k; i++) {
		c[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		c[a[i]]++;
	}
	for (int i = 1; i <= k; i++) {
		c[i] += c[i - 1];
	}

	for (int i = n - 1; i >= 0; i--) {
		b[c[a[i]]] = a[i];
		c[a[i]]--;
	}

}

int main()
{
	cin >> n;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	CountingSort(mx);

	for (int i = 1; i < n; i++) {
		cout << b[i] <<" ";
	}
	cout << b[n] << endl;

	return 0;
}