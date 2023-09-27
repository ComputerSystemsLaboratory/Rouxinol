#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;


int main(void){

	long long int sum;
	int max, min, N;
	cin >> N;
	int temp;
	for(int i = 0; i < N; i++){
		cin >> temp;
		if(i == 0){
			sum = temp;
			min = temp;
			max = temp;
		}
		else{
			if(temp > max) max = temp;
			if(temp < min) min = temp;
			sum = sum + temp;
		}
		
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}