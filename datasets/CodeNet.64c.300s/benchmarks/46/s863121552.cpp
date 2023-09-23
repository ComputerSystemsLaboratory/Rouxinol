#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <stack>

using namespace std;


int prime(int x){
	if (x==1) return 0;
	for(int i=2 ; i*i<=x ; i++){
		if(x%i==0) return 0;
	}
	return 1;
}



int main(){
	int a, d, n;

	while(1){
		cin >> a;
		cin >> d;
		cin >> n;
		if(a==0 && d==0 && n==0) break;

		int i=0;
		int count = 0;
		while(1){
			int flag=0;
			flag = prime(a+d*i);
			if(flag == 1) count++;
			if(count == n){
				cout << a+d*i << endl;
				break;
			}
			i++;
		}

	}
	return 0;
}