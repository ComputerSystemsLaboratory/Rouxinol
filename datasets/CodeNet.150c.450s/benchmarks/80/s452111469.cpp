#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
	int tmp1,tmp2;
	int a=0,b=0;
	for(int i=0; i<4; ++i){
		cin >> tmp1;
		a += tmp1;	
	}
	for(int i=0; i<4; ++i){
		cin >> tmp2;
		b += tmp2;
	}
	if(a >= b){
		cout << a << endl;
	} else if(b > a){
		cout << b << endl;
	}

	return 0;
}