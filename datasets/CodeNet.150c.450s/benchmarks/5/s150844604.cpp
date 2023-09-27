#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	int count;
	int nums[100];
	cin >> count;
	for(int i = 0; i < count; i++){
		cin >> nums[i];
	}
	if (count > 0){
		cout << nums[count - 1];
	}

	for(int i = count - 1; i > 0; i--){
		cout << " " << nums[i - 1];
	}
	cout << endl;
	return 0;
}