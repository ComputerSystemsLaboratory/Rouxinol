#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		 		cout << static_cast<int>(log10(a+b)) + 1 << endl;
	}
	return 0;
}