#include <iostream>

using namespace std;

int main(void){

	int num;
	cin >> num;
	cout << num << ":";
	for(int i = 2; i*i <= num; ++i){
		while(num % i == 0){
			num /= i;
			cout << " " << i;
		}
	}
	if(num != 1){
		cout << " " << num;
	}
	cout << endl;	

	return 0;
}