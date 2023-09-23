#include <iostream>
using namespace std;
int main(void){
	int list[3];
	int tmp;
	cin >> list[0] >> list[1] >> list[2];

	for(int i = 0; i < 2; i++){
		for(int j = 1; j < 3; j++){
			if(list[i] > list[j]){
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	cout << list[0] << " " << list[1] << " " << list[2] << endl;
	return 0;
}