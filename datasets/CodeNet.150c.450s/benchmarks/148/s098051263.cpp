#include<bits/stdc++.h>
using namespace std;

int n;
char s[11];
int cnt[555];

int main() {
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		scanf("%s", s);
		cnt[s[0]] ++;
	}
	printf("AC x %d\n", cnt['A']);
	printf("WA x %d\n", cnt['W']);
	printf("TLE x %d\n", cnt['T']);
	printf("RE x %d\n", cnt['R']);
	
	return 0;
}