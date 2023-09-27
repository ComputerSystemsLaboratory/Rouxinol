#include <iostream>
#include <climits>

using namespace std;

int main(){
	int n;
	cin >> n;
	int R[n];
	for(int i = 0; i < n; i++){
		cin >> R[i];
	}

	int minR = R[0];
	int maxv = INT_MIN;
	for(int i = 1; i < n; i++){
		maxv = max(maxv, R[i] - minR);
		minR = min(minR, R[i]);
	}
	cout << maxv << endl;

	return 0;
}