#include<iostream>
using namespace std;

int main(){
	int h[10];

	for (int i = 0; i < 10; i++){
		cin >> h[i];
	}
	for (int i = 0; i < 9; i++){
		for(int j = i + 1; j < 10; j++){
			if(h[i] < h[j]){
				int temp = h[i];
				h[i] = h[j];
				h[j] = temp;
			}	
		}
	}
	for(int i = 0; i < 3; i++){
		cout << h[i] << endl;
	}

}