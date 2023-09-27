#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int n , w;
	int a , b , ary[100];

	cin >> w >> n;

	for(int i = 1; i <= w; i++){
		ary[i] = i;
	}

	for(int i = 0; i < n; i++){
		scanf("%d,%d" ,&a ,&b);

		int tmp = ary[a];
		ary[a] = ary[b];
		ary[b] = tmp;
	}

	for(int i = 1; i <= w; i++){
		cout << ary[i] << endl;
	}

	return 0;
}