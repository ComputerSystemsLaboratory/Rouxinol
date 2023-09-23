#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int list[100];

	for(int i = 0; i < n; i++) cin >> list[i];


	for(int i = n -1; 0 < i; i--){
		cout << list[i] << " ";
	}

	cout << list[0] << endl;
    return 0;
}