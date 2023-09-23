#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int num[30];
	int n[2];
	int c = 0;
	num[28] = num[29] = 40;
	for(int i = 0; i < 28; i++){
		cin >> num[i];
	}
	sort(num, num+30);
	
	for(int i = 0; i < 30; i++){
		if(num[i] != i+1){
			c == 0 ? num[28] = i+1 : num[29] = i+1;
			n[c] = i+1;
			c++;
			sort(num, num+30);
		}
	}
	
	for(int i = 0; i < 2; i++){
		cout << n[i] << endl;
	}
	
	return 0;
}