#include<bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(c + e > a || c - e < 0 || d + e > b  || d - e < 0){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
	return 0;
}