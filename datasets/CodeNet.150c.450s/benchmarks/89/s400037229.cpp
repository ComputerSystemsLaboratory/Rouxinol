#include <cstdio>
#include <cstdlib>
//#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <set>
using namespace std;

#define MAXNUM 1000000

int main(void){

	bool nonPrimeMap[MAXNUM] = { false };
	nonPrimeMap[0] = true;
	nonPrimeMap[1] = true;

	for (int i = 2; i < MAXNUM; i++){
		if (nonPrimeMap[i])	continue;

		for (int j = 2; i * j < MAXNUM; j++){
			nonPrimeMap[i * j] = true;
		}
	}

	int a, d, n;
	while (cin >> a >> d >> n, a, d, n){
		int count = 0;
		int result;
		for (int k = 0; count < n;k++){
			if (!nonPrimeMap[a + k * d]){
				count++;
				result = a + k * d;
			}
		}

		cout << result << endl;
	}

	return 0;
}