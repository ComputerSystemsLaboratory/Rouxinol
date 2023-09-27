#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	int i,j;
	while (true){
		cin >> i >> j;
		if (i == 0 && j == 0)break;
		(i < j) ? cout << i << " " << j << endl : cout << j << " " << i << endl;
	}

	return 0;
}