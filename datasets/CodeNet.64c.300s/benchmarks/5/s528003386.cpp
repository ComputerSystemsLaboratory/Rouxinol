#include <iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include<string>
using namespace std;



int main(void){

	int height[10];
	int max1=0, max2=0, max3=0;

	for (int i = 0; i < 10; i++){

		cin >> height[i];	
	}



	for (int i = 0; i < 9; i++){
	
		for (int j = i + 1; j < 10; j++){
		
			if (height[i] < height[j]){
				swap(height[i], height[j]);
			}
		
		}
	}

	
	cout << height[0] << endl;
	cout << height[1] << endl;
	cout << height[2] << endl;

	
	return 0;
}