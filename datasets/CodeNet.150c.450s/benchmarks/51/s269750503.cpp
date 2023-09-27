#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	bool a[30];
	
	for(int i = 1; i <= 30; i++){
		a[i] = true;
	}
	
	int num;
	
	for(int i = 0; i < 28; i++){
		cin >> num;
		a[num] = false;
	}
	
	for(int i = 1; i <= 30; i++){
		if(a[i]){
			printf("%d\n", i);
		}
	}
	
	return 0;
}