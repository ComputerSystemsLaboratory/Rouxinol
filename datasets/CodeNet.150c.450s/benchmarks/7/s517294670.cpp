#include <iostream>
#include <array>
#include <functional>
#include <algorithm>


using namespace std;

int main(){
	array<int,10> list;
	for (int i = 0; i < 10; i++){
		cin >> list[i];
	}
	sort(list.begin(), list.end(),greater<int>());
	for (int i = 0; i < 3; i++){
		cout << list[i] << endl;
	}
	return 0;
}