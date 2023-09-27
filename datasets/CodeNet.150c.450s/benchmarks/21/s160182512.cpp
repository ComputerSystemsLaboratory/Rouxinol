#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int sub_function(int x) {
	return x*x*x;
}

int main() 
{
	int a;
	cin >> a ;
	cout << sub_function(a) << endl;
}