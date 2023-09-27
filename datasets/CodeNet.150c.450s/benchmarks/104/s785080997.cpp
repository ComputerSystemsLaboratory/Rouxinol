#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int W[31], w, n, a, b;
	int i, j, temp;
	char x;

	cin >> w >> n;
	for(i = 1;i < w+1;i++){
		W[i] = i;
	}
	while(n != 0){
		if(n == 0) break;
		cin >> a >> x >>  b;
		temp = W[a];
		W[a] = W[b];
		W[b] = temp;
 		n--;
	}
	for(i = 1;i < w+1;i++){
		cout << W[i] << endl;
	}
	return 0;
}