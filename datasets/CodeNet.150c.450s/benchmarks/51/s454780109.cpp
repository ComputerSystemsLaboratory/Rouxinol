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
	int stu[30];
	fill_n(stu, 30, 0);
	for(int i = 0; i < 28; i++){
		int a;
		cin >> a;
		stu[a-1] = 1;
	}
	for(int i = 0; i < 30; i++){
		if(stu[i] != 1) cout << i+1 << endl;
	}
}