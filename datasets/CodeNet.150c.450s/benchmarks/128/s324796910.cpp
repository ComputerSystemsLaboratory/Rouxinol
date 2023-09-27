#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string A;
	cin >> A;
	reverse(A.begin(),A.end());
	cout << A <<"\n";
	return 0;
}