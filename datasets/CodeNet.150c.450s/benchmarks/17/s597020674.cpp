#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int i, num[5];

	for(i = 0; i < 5; i++){
		cin >> num[i];
	}

	sort(num, num+5);
	for(i = 4; i > 0; i--){
		cout << num[i] << " ";
	}
	cout << num[0] << endl;

	return 0;
}