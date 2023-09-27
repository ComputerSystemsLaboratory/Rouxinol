#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <utility>
#include <string>
typedef unsigned long ul;

using namespace std;

int main(){
	int len;
	string str;
	cin >> str;
	len = str.length();
	for(int i = len-1; i >= 0; i--){
		cout << str.at(i);
	}
	cout << endl;
}