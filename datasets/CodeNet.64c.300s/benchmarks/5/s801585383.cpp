#include<iostream>

using namespace std;

int main(){
	int takasa[10];
	for(int i = 0; i <10; i++){
		cin >> takasa[i];
	}
	//sort
	for(int i = 0; i < 9; i++){
		for (int j = i+1; j < 10; j++){
			if(takasa[i] < takasa[j]){
				swap(takasa[i],takasa[j]);
			}
		}
	}
	for(int i = 0; i < 3; i++){
		cout << takasa[i] << "\n";
	}
	return 0;
}