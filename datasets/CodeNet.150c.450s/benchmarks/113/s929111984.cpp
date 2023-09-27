#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x = 100, i = 1;
	while(x){
		cin >> x;
		if(x)cout << "Case " << i << ": " << x << endl;
		i++;
	}
	return 0;
}