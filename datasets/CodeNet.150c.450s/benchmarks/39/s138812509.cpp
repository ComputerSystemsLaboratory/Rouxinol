#include <iostream>
using namespace std;

int i;
int j;
int length;
int area;

int main(){
	cin >> i >> j;
	length = i*2 + j*2;
	area = i*j;
	cout << area << " "   << length << endl;
	return 0;
}