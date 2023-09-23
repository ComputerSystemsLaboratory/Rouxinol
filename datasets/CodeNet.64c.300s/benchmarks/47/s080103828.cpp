#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int n, max=0, s[100];

	for(int i=0; i<100; i++) {
		s[i]=0;
	}

	while(cin >> n) {
		s[n-1]++;
	}

	for(int i=0; i<100; i++) {
		if(s[i]>max)
			max=s[i];
	}

	for(int i=0; i<100; i++) {
		if(s[i]==max)
			cout << i+1 << endl;
	}

	return 0;

}