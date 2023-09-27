#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int s[26] = { 0 };
	char n;
	char N[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	while (cin >> n) {
		if(islower(n)==0)n=tolower(n);
		s[n - 'a'] += 1;
	}
	for (int i = 0; i < 26; i++) {
		cout <<N[i] <<" "<< ":"<<" "<< s[i] << endl;
	}
	return 0;
}