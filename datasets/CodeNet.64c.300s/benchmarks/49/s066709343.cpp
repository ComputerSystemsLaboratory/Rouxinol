#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int a, b, k;
	
	while(scanf("%d %d", &a, &b) != EOF){
		k = a + b;
		int ans = 0;
		while(k >= 1){
			k = k / 10;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}