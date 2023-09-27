
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


//
int main(void){
//	FILE* fp_in = freopen("data.txt", "r", stdin);

	int n;
	int debt = 100000;
	cin >> n;
	for(int i = 0; i < n; i++ ){
		debt += 5*debt/100;
		if(debt % 1000 > 0) 
			debt = debt/1000*1000 + 1000;
	}
	cout << debt << endl;
//	while(1){}
	return 0;
}