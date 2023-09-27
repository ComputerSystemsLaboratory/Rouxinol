#include<bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, ans = 0;
	scanf("%d %d %d", &a, &b, &c);
	for(int i = a; i <= b; i++){
		if(!(c % i)){
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}