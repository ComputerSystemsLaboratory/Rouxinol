//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <vector>
#include <string>
//#include <algorithm>
//#include <functional>
#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	int m, d;
	int days[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sum = 0;
	string wd[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };


	while (cin >> m >> d){
		if (m == 0)break;
		sum = 0;

		for (int i = 1; i < m; i++){
			sum += days[i];
		}
		sum += d;

		cout << wd[(sum+2) % 7] << endl;

	}


	return 0;
}