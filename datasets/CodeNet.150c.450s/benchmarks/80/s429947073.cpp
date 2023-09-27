#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	int a, b, a_sum, b_sum;
	
	a_sum = 0;
	b_sum = 0;
	
	for(int i = 0; i < 4; i++){
		cin >> a;
		a_sum += a;
	}
	
	for(int i = 0; i < 4; i++){
		cin >> b;
		b_sum += b;
	}
	
	if(a_sum > b_sum){
		printf("%d\n", a_sum);
	}else{
		printf("%d\n", b_sum);
	}
	
	return 0;
}