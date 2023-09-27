#include <iostream>
using namespace std;

int main() {
	string number;
	int sum[1000];
	int j = 0;
	while(1){
		sum[j] = 0;
		cin >> number;
		if(number == "0"){
			sum[j] = 0;
			break;
		}
		for (int i =0; i < number.length(); i++){
			sum[j] += number[i] - '0';
		}
		j++;
	}
	j = 0;
	while(1){
		if(sum[j] == 0)
			break;
		cout << sum[j] << endl;
		j++;
	}
	return 0;
}