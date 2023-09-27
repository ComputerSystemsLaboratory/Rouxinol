#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <memory.h>
#include <iomanip>
#include <bitset>
#include <list>
#include <stack>

using namespace std;

#define mod 1000000007

int main()
{
	string array1, array2;
	// cout << "array1: ";
	cin >> array1;
	// cout << "array2: ";
	cin >> array2;
	int l1 = array1.length(), l2 = array2.length();
	long long int result[l1 + 1][l2 + 1];
	for(int i = 0; i <= l1; i++){
		result[i][0] = i;
	}
	for(int i = 0; i <= l2; i++){
		result[0][i] = i;
	}
	for(int i = 1; i <= l1; i++){
		for(int j = 1; j <= l2; j++){
			int w;
			if(array1[i - 1] == array2[j - 1]) w = 0;
			else w = 1;
			result[i][j] = min(result[i - 1][j - 1] + w, min(result[i - 1][j] + 1, result[i][j - 1] + 1));
		}
	}
	cout << result[l1][l2] << endl;
	return 0;
}