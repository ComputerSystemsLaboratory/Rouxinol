#include<iostream>
using namespace std;
int main(){
	int n[5];
	int tmp;
	for(int i = 0; i<5; ++i) cin >> n[i];	
	for(int i = 0; i<5; ++i) {
		for(int j = i+1; j < 5; ++j) {
			if(n[i] < n[j]){
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
	}
	for(int i = 0; i<5; ++i){
		if(i == 4) { 
			cout << n[i] << endl;;
		}else {
			cout << n[i] << " ";
		}
	}
	return 0;
}