#include <iostream>
#include <string>

using namespace std;

int main(){
	int a,b,c;
	string str;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a<b && b<c)
		str = "Yes";
	else
		str = "No";
	cout << str <<endl;
	return 0;
}