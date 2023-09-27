#include <iostream>
using namespace std;

int main(){
	int height[10];
	int i , j;
	for(i=0 ; i<10 ; i++){
		cin >> height[i] ;
	}
	for(i=9 ; i>0 ; i--){
		for(j=0 ; j<i ; j++){
			if (height[j]>=height[j+1]){
				height[j]^=height[j+1];
				height[j+1]^=height[j];
				height[j]^=height[j+1];
			}
		}
	}
	for(i=9 ; i>6 ; i--){
		cout << height[i] << endl;
	}
	return 0;
}