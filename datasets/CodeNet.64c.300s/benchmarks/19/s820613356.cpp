#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n != 0){
		int a[n];
		

		for (int i = 0; i < n; ++i){
			cin >> a[i];
		}

		int maximum = -100000000;
		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = i; j < n; j++){
				sum += a[j];
				maximum = max(maximum, sum);
			}
		}

		cout << maximum << endl;
		cin >> n;
	}

	return 0;
}