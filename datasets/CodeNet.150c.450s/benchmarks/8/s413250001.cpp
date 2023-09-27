#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main() {
	int n, c1 = 0, c2 = 0;
	string s1, s2;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    cin >> s1 >> s2;
	    if (s1 > s2) c1 += 3;
	    else if (s2 > s1) c2 += 3;
	    else {
	        c1++;
	        c2++;
	    }
	}
	cout << c1 << " " << c2 << endl;
	return 0;
}
