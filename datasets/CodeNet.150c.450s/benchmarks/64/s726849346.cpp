#include <cstdio>
#include <iostream>
using namespace std;

int *S, n;

//void rec(int i)
//{
//	// << "call rec. i: " << i << endl;
//	if (i == n) {
//		for (int i = 0; i < n; i++) cout << S[i];
//		cout << endl;
//		return;
//	}
//	rec(i + 1);
//	S[i] = 1;
//	rec(i + 1);
//	S[i] = 0;
//}
//
//void makeCombination()
//{
//	for (int i = 0; i < n; i++)
//		S[i] = 0;
//	rec(0);
//}

int solve(int i, int m)
{
	if (m == 0) return 1;
	if (i >= n) return 0;
	int ret = solve(i + 1, m) || solve(i + 1, m - S[i]);
	return ret;
}

int main()
{
	int q, m;

	scanf("%d", &n);	
	S = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &S[i]);

	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d", &m);
		if (solve(0, m)) printf("yes\n");
		else printf("no\n");
	}
	delete[] S;
	return 0;
}