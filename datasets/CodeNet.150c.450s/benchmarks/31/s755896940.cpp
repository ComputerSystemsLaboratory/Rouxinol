#include<iostream>
using namespace std;

int main(){
	int R, n, i, max_gain, min;
	cin >> n;
	cin >> R;
	min = R;
	cin >> R;
	max_gain = R-min;
	if(min > R)
		min = R;
	for(i=2;i<n;i++){
		cin >> R;
		if(max_gain < R-min)
			max_gain = R-min;
		if(min > R)
			min = R;
	}
	cout << max_gain << endl;
	return 0;
}