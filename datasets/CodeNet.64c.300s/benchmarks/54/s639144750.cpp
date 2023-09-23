#include <cstdio>

int n;
int a[100];
long long int s[100][21];

int main() {
	scanf("%d", &n);
	
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	
	for(int i=0;i<21;i++) {
		s[0][i] = 0;
	}
	
	s[0][a[0]] = 1;
	
	for(int i=1;i<n-1;i++) {
		for(int j=0;j<21;j++) {
			s[i][j] = 0;
			if(j+a[i]<=20) {
				s[i][j] += s[i-1][j+a[i]];
			}
			if(j-a[i]>=0) {
				s[i][j] += s[i-1][j-a[i]];
			}
		}
	}
	
	printf("%lld\n", s[n-2][a[n-1]]);
	
	return 0;
}