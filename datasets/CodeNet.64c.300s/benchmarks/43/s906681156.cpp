#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <queue>
#include <sstream>
using namespace std;

int main(void){
	int sum[2];
	fill_n(sum, 2, 0);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			int a;
			cin >> a;
			sum[i] += a; 
		}
	}
	cout << max(sum[0], sum[1]) << endl;
}