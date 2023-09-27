#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cctype>
#include<cstring>
using namespace std;



int main() {
	char x;
	int cnt[26] = {},n;
	for (; cin >> x&&x!='$';) {
		if (isalpha(x)) {
			if (isupper(x))x = tolower(x);
			n = x - 'a';
			cnt[n]++;

		}
	}
	char a = 'a';
	for (int i = 0; i < 26; i++) {
		cout << (char)(a + i) << " : " << cnt[i] << endl;
		//if (i != 25)cout << endl;
		
	}
	return 0;
}