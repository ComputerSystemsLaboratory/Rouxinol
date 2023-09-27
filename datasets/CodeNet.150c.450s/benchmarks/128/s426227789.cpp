//#define _USE_MATH_DEFINES
#include <iostream>
//#include <stdio.h>
//#include <iomanip>
#include <vector>
#include <string>
//#include <algorithm>
//#include <functional>
//#include <cmath>

using namespace std;


int main(){

	string str1,str2;
	
	cin >> str1;

	for (int i = str1.length()-1; i >= 0; i--){
		str2.push_back(str1[i]);
	}


	cout << str2 << endl;


	return 0;
}