#include <iostream>
using namespace std;
int pow(int n, int exp){
	int result = 1;
	for (int i = exp; i != 0; i >>= 1){
		result *= result;
		if ((i & 1) == 1)
				result *= n;
	}
	return result;
}
int main(){
	int n, r;
	int max = -pow(10, 9);
  int min;
	cin >> n;
  cin >> min;
	for  (int i = 1; i < n; i++){
		cin >> r;
		if (max < r - min)
			max = r - min;
  	if (min > r)
  			min = r;
	}
	cout << max << endl;
}