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
//#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	int n;
	double p[8];
	double k1, k2;
	bool ans = false;

	cin >> n;

	while (n--){
		ans = false;
		for (int i = 0; i < 8; i++){
			cin >> p[i];
		}

		if (p[0] == p[2] || p[4] == p[6]){
			if (p[0] == p[2] && p[4] == p[6])ans = true;
		}
		else{
			k1 = (p[3] - p[1]) / (p[2] - p[0]);
			k2 = (p[7] - p[5]) / (p[6] - p[4]);
			if (k1 == k2)ans = true;
			if (k1 > k2 && (k1 -k2 ) < 0.000000001) ans = true;
			if (k2 > k1 && (k2 - k1) < 0.000000001) ans = true;
		}

		cout << (ans ? "YES" : "NO") << endl;
	}


	return 0;
}