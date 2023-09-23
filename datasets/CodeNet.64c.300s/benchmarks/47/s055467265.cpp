//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	int n;
	int cnt[100];
	int mead = 0;

	for (int i = 0; i < 100; i++){
		cnt[i] = 0;
	}

	while (cin >> n){
		cnt[n - 1]++;
		if (cnt[n - 1] > mead) mead = cnt[n - 1];
	}

	for (int i = 0; i < 100; i++){
		if (cnt[i] == mead) cout << i + 1 << endl;
	}

	return 0;
}