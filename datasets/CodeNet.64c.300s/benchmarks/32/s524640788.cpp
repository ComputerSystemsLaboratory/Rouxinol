#include <iostream>
#include <climits>

using namespace std;

int main(){
	int n, a;
	long sum = 0; int max = INT_MIN; int min = INT_MAX;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		sum += a;
		if(max < a){
			max = a;
		}
		if(min > a){
			min = a;
		}
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}