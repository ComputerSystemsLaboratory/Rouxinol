#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int main(){

	int i, j;

	int w, n;

	cin >> w;
	cin >> n;

	int S[w];
	int a, b;
	int temp;

	for(i=0 ; i<w ; i++){
		S[i] = i+1;
	}

	for(i=0 ; i<n ; i++){
		scanf("%d,%d",&a, &b);
		temp = S[a-1];
		S[a-1] = S[b-1];
		S[b-1] = temp;
	}
	for(i=0 ; i<w ; i++){
		cout << S[i] << endl;
	} 

	return 0;
}