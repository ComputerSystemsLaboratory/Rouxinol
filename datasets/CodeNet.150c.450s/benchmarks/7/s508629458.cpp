#include <iostream>
using namespace std;

int main(){

	int mt_list[10];

	for (int i = 0; i<10; i++){
		cin >> mt_list[i];
	}

	int high[3] = { 0, 0, 0 };
	for (int h = 0; h<3; h++){
		int tmp = 0;
		for (int i = 0; i<10; i++){
			if (high[h] <= mt_list[i]){
				high[h] = mt_list[i];
				tmp = i;
			}
		}
		high[h] = mt_list[tmp];
		mt_list[tmp] = 0;
	}

	for (int i = 0; i<3; i++){
		cout << high[i] << endl;
	}

	return 0;
}