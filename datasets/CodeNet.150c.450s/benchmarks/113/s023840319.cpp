#include<iostream>
using namespace std;

int main() {
	int dataset[10001];
	int length,x;
	for (int i = 0;; i++){
		cin >> x;
		if (x==0){
			length = i;
			break;
		}
		dataset[i] = x;
	}
	for (int i = 0; i < length; i++){
		if (length>10000)
		{
			cout << "Too large" << endl;
			break;
		}
		cout << "Case " << i + 1 << ": " << dataset[i] << endl;
	}
	return 0;
}