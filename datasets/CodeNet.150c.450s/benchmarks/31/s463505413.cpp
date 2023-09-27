
#include <iostream>

using namespace std;
#define NUMBER 200000

int main(){

	int ary[NUMBER];
	int min_register[NUMBER];


	int n;
	cin >> n;	//????´???°?????????

	cin >> ary[0];	//1?????????????´??????????
	int min=ary[0];
	min_register[0] = min;

	int max = -1000000001;
	for(int i = 1; i < n; i++){
		cin >> ary[i];
		min = (min > ary[i])?ary[i]:min;
		min_register[i] = min;
		max = (max > ary[i] - min_register[i-1])?max:ary[i] - min_register[i-1];

	}
	cout << max << endl;
}