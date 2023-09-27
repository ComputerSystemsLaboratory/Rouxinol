#include <iostream>

using namespace std;

int main() {

	int s[31], j=28, x;

	for(int i=1; i<31; i++) {
		s[i]=1;
	}
	while(j) {
		cin >> x;
		s[x]=0;
		j--;
	}
	for(int i=1; i<31; i++) {
		if(s[i]==1)
			cout << i << endl;
	}

	return 0;

}