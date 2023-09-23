#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int in;

	cin >> in;

	int out = static_cast<int>(pow(static_cast<double>(in), 3.0));

	cout << out << endl;

	return 0;
}