#include <iostream>
using namespace std;
 
int main() {
	int unco[28] = {};
	int tinko[31] = {};
	for (int i = 0; i < 28; i++){
		cin >> unco[i];
	}
 
	for (int i = 0; i < 28; i++){
		tinko[unco[i]] = 1;
	} 
 
	for (int i = 1; i < 31; i++){
		if (tinko[i] == 0){
			cout << i << endl;
		}
	}
 
	return 0;
}