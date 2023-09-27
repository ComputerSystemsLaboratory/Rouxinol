#include<iostream>
#include<cstdio>

using namespace std;

void change(int *x, int *y);

int main(void){
	int w,n;
	int p[31];
	int a, b;
	cin >> w;
	cin >> n;
	
	for(int i = 1; i <= w; i++){
		p[i] = i;
	}
	
	for(int j = 0; j < n; j++){
		scanf("%d,%d", &a, &b);
		change(&p[a], &p[b]);
		
	}
	for(int i = 1; i <= w; i++){
		cout << p[i] << endl;
	}
	return 0;
}

void change(int *x, int *y){
	int type = *x;
	*x = *y;
	*y = type;
}