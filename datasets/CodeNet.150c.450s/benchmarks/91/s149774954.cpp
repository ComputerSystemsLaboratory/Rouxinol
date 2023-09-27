#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <utility>
#include <string>
#include <math.h>
typedef unsigned long ul;

using namespace std;

int arr[1000000] = {0};

int main(){
	for(int i = 2; i < 999999; i++)arr[i] = 1;
	for(int i = 2; i*i < 999999; i++){
		for(int j = i*2; arr[i] == 1 && j <= 999999; j += i){
			arr[j] = 0;
		}
	}
	for(int i = 1; i <= 999999;i++)arr[i] += arr[i-1];

	int n;
	while(cin >> n){
		cout << arr[n] << endl;
	}
}