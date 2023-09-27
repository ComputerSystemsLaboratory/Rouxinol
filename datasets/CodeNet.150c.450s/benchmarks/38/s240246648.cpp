#include <iostream>
using namespace std;

int main() {
	int n;
	int length[3];
	int temp;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> length[0] >> length[1] >> length[2];
		if(length[0] <= length[1]){
			temp = length[0];
			length[0] = length[1];
			length[1] = temp;
		}
		if(length[0] <= length[2]){
			temp = length[0];
			length[0] = length[2];
			length[2] = temp;
		}
		if(length[0]*length[0] == length[1]*length[1] + length[2]*length[2]){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}