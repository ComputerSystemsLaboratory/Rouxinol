#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, y;
	bool doing = true;
	while(x+y){
	cin >> x >> y;
	
	if(x != 0 || y != 0){
		int s1 , s2;
		if (x < y) {s1 =x; s2 =y;}
		else {s1 = y; s2 = x;}
		cout << s1 << " " << s2 << endl;
	}
	}
	return 0;
}