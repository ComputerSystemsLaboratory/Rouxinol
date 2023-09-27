#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	string result = " == ";
	if (a > b) result = " > ";
	else if (a < b) result = " < ";
	cout << 'a' << result << 'b' << endl;
	return 0;
}
