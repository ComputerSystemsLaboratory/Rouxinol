#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int sum = 0,sum2 = 0,tmp;
	for (int i = 0; i < 4; i++){
		cin >> tmp;
		sum += tmp;
	}
	for (int i = 0; i < 4; i++){
		cin >> tmp;
		sum2 += tmp;
	}
	cout << max(sum,sum2) <<endl;
}