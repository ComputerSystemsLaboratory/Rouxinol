#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> numbers(n);
	for (int i=0; i<n; i++){
		cin >> numbers[i];
	}
	for(int i=n; i>1; i--){
		cout << numbers[i-1] << ' ';
	}
	cout << numbers[0] << endl;

	return 0;
}