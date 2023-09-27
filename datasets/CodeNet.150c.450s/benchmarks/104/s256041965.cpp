#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define WMAX 30
#define NMAX 30

int v_pos[WMAX]; // ??????????????????????????????????????¶???

void exchange(int v_pos[], int a, int b){
	swap(v_pos[a], v_pos[b]);
}

int main(){
	int w, n;
	int a, b;
	char input[6], *token1, *token2;
	cin >> w >> n;
	for(int i=1;i<=w;i++){
		v_pos[i] = i;
	}

	for(int i=1;i<=n;i++){
		scanf("%d,%d", &a, &b);
		exchange(v_pos, a, b);
	}
	for(int i=1;i<=w;i++){
		printf("%d\n", v_pos[i]);
	}
	return 0;
}