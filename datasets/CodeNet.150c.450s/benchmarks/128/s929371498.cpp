#include <iostream>
using namespace std;
int main(){
	char c[21];
	int n = 0;
	while(cin >> c[n]){n++;}
	for(int i=n-1;i>=0;i--) cout << c[i];
	cout << endl;
}