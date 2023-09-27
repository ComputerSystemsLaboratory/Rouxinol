#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	int a[30];
	int b[30];
	int n,m;

	int c[30];
	for(int i = 0; i < 30; i++){
		c[i] = i + 1;
	}
	cin  >> n >> m;
	for(int i = 0; i < m; i++){
		scanf("%d,%d", &a[i], &b[i]);
	}


	for(int i = 0; i < m; i++){
		swap(c[a[i] - 1], c[b[i] - 1]);
	}

	for(int i = 0; i < n; i++){
		cout << c[i] << endl;
	}



}