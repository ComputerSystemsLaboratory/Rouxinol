#include<iostream>
using namespace std; //or std::cin et al.

int main() {
	int i,count = 1;
	while (1) {
		cin >> i;
		if ( i == 0 ) {
			break;
		}
		cout << "Case " << count << ": " << i << endl;
                count++;
	}
	
	return 0;
}
