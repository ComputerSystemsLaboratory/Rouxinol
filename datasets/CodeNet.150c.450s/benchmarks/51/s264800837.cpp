#include <iostream>

using namespace std;

int main(){
	int comp[30], present[28];
	int absent[2], k;

	for (int i = 0; i < 30; i++){
		comp[i] = i + 1;
	}
	
	for (int i = 0; i < 28; i++){
		cin >> present[i];
	}

	for (int i = 0; i < 30; i++){
		for (int j = 0; j < 28; j++){
			if (comp[i] == present[j]){
				comp[i] = 0;
			}
		}
	}
	
	k = 0;
	for (int i = 0; i < 30; i++){
		if (comp[i] != 0){
			absent[k] = comp[i];
			k++;
		}
	}

	if (absent[0] > absent[1]){
		cout << absent[1] << "\n" << absent[0] << endl;
	}
	else {
		cout << absent[0] << "\n" << absent[1] << endl;
	}
}