#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int c = 100;
	for(int i=0; i<n; i++){
		c = (c*105+99)/100;
	}
	cout << c*1000 << endl;
	return 0;
}