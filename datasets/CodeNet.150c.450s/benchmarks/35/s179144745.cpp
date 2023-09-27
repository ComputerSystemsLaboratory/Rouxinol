#include <iostream>
using namespace std;

int main(){
    while (1){
	int n;
	int input[5001];
	int max1;
	cin >> n;
	if (n == 0) break;

	for (int i = 0; i < n; i++){
	    cin >> input[i];
	}
	max1 = input[0];

	for (int i = 0; i < n; i++){
	    int sum = 0;
	    for (int j = i; j < n; j++){
		sum += input[j];
		max1 = max(max1, sum);
	    }
	}
	cout << max1 << endl;
    }
    return 0;
}