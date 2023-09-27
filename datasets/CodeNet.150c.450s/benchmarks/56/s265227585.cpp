#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int temp;
	long min = 1000000, max = -1000000, sum = 0;

	for(int i = 0; i < n; i++){
		cin >> temp;

		sum+= temp;
		if(temp < min) min = temp;
		if(max < temp) max = temp;
	}

	printf("%ld %ld %ld\n", min, max, sum);

	return 0;
}