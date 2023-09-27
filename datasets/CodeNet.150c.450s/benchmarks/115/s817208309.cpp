#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int lcs(string s1,string s2)
{
	int m = s1.size();
	int n = s2.size();
	int c[1005][1005];
	for (int i = 1; i <= m; i++)c[i][0] = 0;
	for (int j = 1; j <= n; j++)c[0][j] = 0;
	int maxz = 0;
	s1 = " " + s1;
	s2 = " " + s2;
	for(int i=1;i<=m;i++)
		for (int j = 1; j <= n; j++) {
			if (s1[i] == s2[j])
				c[i][j] = c[i-1][j-1] + 1;
			else {
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			}
			maxz = max(maxz, c[i][j]);
		}
	return maxz;
}
int main()
{
	int N;
	scanf("%d", &N);
	while (N--) {
		string s1, s2;
		cin >> s1>>s2;
		cout << lcs(s1, s2) << endl;
	}
	return 0;
}