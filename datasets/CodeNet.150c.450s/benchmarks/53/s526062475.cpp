#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define rep(i,n) for(int i=0;i<n;++i)

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 1000000;

void prime_factor(int n)
{
	for(int i=2;i*i<=n;i++){
		while(n%i == 0){
			printf(" %d",i);
			n /= i;
		}
	}
	if(n != 1){
		printf(" %d",n);
	}
	return;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d:",n);
	prime_factor(n);
	printf("\n");
	return 0;
}