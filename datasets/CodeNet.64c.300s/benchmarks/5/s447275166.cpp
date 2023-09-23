#include<iostream>
using namespace std;

int main(){
	int height[10] = {0};

	for(int i = 0; i < 10; i++){
		cin >> height[i];
	}
	
	int temp = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 9-i; j++){
			if(height[j] > height[j+1]){
				temp = height[j];
				height[j] = height[j+1];
				height[j+1] = temp;
			}
		}
	}
	
	cout << height[9] << endl;
	cout << height[8] << endl;
	cout << height[7] << endl;
	
	return 0;
}