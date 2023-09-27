#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int a;
	scanf("%d", &a);
	vector<int>b(3);
	for (int c = 0; c < a; c++) {
		scanf("%d%d%d", &b[0], &b[1], &b[2]);
		sort(b.begin(), b.end());
		if (b[0] * b[0] + b[1] * b[1] == b[2] * b[2])printf("YES\n");
		else printf("NO\n");
	}
}