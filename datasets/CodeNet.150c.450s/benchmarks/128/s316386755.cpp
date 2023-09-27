#include <iostream>
#include <stdio.h>
#include <math.h>
#define ll unsigned long long int
using namespace std;

int main(){
	string s;
	cin >> s;
	for (int i = s.length() - 1; i >= 0; i--)	cout << s.at(i);

	cout << endl;
	return 0;
}