#include<iostream>
using namespace std;	

int main(){
	int n;
	int ai, min, max;
	long long sum = 0;
	cin >> n;
	
	min = 1000000;
	max = -1000000;
	while (n--){
		cin >> ai;
		sum += ai;
		if (max < ai) max = ai;
		if (min > ai) min = ai;
	}
	cout << min << " " << max << " " << sum << endl;

	return 0;
}