#include<iostream>

using namespace std;

int main(){
	int height;
	int high[3] = {0, 0, 0};
	for(int i=0;i<10;++i){
		cin >> height;
		if(height > high[0]){
			high[2] = high[1];
			high[1] = high[0];
			high[0] = height;
		}
		else if(height > high[1]){
			high[2] = high[1];
			high[1] = height;
		}
		else if(height > high[2]){
			high[2] = height;
		}
	}
	for(int i=0;i<3;++i){
		cout << high[i] << endl;
	}
	return 0;
}