#include <iostream>
using namespace std;

int main(){
	int num[5], i, j, a;
	for(i = 0; i < 5; i++){
		cin >> num[i];
	}
	
	for(j = 4; j >= 0; j--){
		for(i = 0; i < j; i++){
			if(num[i] < num[i+1]){
				a = num[i];
				num[i] = num[i+1];
				num[i+1] = a;
			}
		}
	}
	
	for(i = 0; i < 4; i++){
		cout << num[i] << ' ';
	}
	cout << num[4] << endl;
	
	return 0;
}