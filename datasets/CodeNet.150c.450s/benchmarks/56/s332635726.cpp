#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

int main(){
	int *array;
	int n,max=-INT_MAX,min=INT_MAX;
	long long sum=0;
	std::cin >> n;
	array= new int[n];

		for(int i=0;i<n;i++){
		std::cin >> array[i];
		max = std::max(max, array[i]);
		min = std::min(min, array[i]);
		sum += array[i];
		}
	std::cout << min << " " << max << " " << sum << std::endl;
	delete [] array;
}