#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	
	int a, b;
	while(cin >> a >> b){
		cout << (int)log10((double)(a+b)) + 1 << "\n";
	}
	
}