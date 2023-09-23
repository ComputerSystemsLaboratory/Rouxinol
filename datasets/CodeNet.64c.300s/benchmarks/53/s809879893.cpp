#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	int count;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
		
	int i=1;
	for(i=a;i<=b;i++){
		if(c%i == 0) {
			count++;
		}
	}
	cout << count << endl;
	
	return 0;
}