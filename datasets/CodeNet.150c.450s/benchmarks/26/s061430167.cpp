#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int a, b;
int main(){
	cin >> a >> b;

	if (a == b){
		cout << "a == b" << endl;
		return 0;
	}

	a < b ? cout << "a < b" << endl : cout << "a > b" << endl;

	return 0;
}