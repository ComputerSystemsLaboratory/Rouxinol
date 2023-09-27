#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> Number(5);
	scanf("%d%d%d%d%d", &Number[0], &Number[1],&Number[2],&Number[3],&Number[4]);
	sort(Number.begin(), Number.end(), greater<int>());
	printf("%d %d %d %d %d\n", Number[0], Number[1], Number[2], Number[3], Number[4]);
	return 0;
}