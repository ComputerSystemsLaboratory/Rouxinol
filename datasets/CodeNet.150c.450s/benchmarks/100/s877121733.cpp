#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

unsigned long long su=1;;
int isu;
	
	cin >> isu;
	rep(i,isu)
		su *= isu - i;
	cout << su << endl;
	return 0;
}