#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	const char* ans = (a < b && b < c) ? "Yes" : "No";
	
	cout << ans << endl;
	
}
