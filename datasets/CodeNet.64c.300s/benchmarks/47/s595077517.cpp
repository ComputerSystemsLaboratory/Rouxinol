#include<bits/stdc++.h>
using namespace std;
static const int MAX_N = 100;

int a[MAX_N];

int main(void){
	for(int i = 0; i <= MAX_N; i++){
		a[i] = 0;
	}

	int input;
	while(scanf("%d", &input) != EOF){
		a[input]++;
	}

	int max_a = 0;
	for(int i = 0; i < MAX_N; i++){
		if(a[i] > max_a) max_a = a[i];
	}
	for(int i = 0; i < MAX_N; i++){
		if(a[i] == max_a) printf("%d\n", i);
	}
	return 0;
}