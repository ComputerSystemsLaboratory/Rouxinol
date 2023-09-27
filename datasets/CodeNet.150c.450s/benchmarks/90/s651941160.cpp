#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int a[101];
	for(int i = 0;i < 101;i++){
		a[i] = 0;
	}
	int n;
	while(cin >> n){

		for(int i = 0;i < 101;i++){
			if(i == n){
				a[i]++;
			}
		}
	}
	int hold = a[0];
	for(int i = 1;i < 101;i++){
		if(hold < a[i]){
			hold = a[i];
		}
	}
	for(int i = 0;i < 101;i++){
		if(a[i] == hold) cout << i << endl;
	}
	return 0;
}