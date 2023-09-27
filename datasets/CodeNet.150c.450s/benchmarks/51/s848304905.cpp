#include<iostream>
using namespace std;
int main(){
	int men[100] = {}, a[100] = { 0 };
	for (int i = 0; i < 28; i++){
		cin >> a[i];
		men[a[i]] = 1;
	}
	for (int i = 1; i <= 30; i++){
		if (men[i] != 1){
			cout << i << endl;
		}
	}
	return 0;
}