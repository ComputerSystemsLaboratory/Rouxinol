#include <iostream>
#define STU_NUM 30
#define NYUURYOKU 28

using namespace std;

int main(){
	int a[STU_NUM] = { 0 };
	int temp = 0;
	int n[2] = { 0 };

	for(int i = 0; i < NYUURYOKU; i++){
		cin >> temp;
		a[temp - 1] = 1;
	}
	int i, j;

	for(i = 0; i < STU_NUM; i++){
		if(a[i] == 0){
			cout << i + 1 << endl;
		}
	}

	// if(n[0] > n[1]){
	// 	cout << n[0] + " " + n[1] << endl;
	// }else{
	// 	cout << n[1] + " " + n[0] << endl;
	// }
}