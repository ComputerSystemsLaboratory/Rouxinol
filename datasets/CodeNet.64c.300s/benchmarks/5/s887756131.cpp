#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include<string>
#include <algorithm>
#include <functional>
#include <cmath>
using namespace std;
typedef vector <int> ivector;

int main(){
	
	int arr[10];
	for (int i = 0; i <10; i++){
		cin >> arr[i];
	}
	sort(arr, arr + 10,greater<int>());
	for (int i = 0; i < 3; i++){
		cout << arr[i] << endl;
	}

	return 0;
}