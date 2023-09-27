
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str1, str2;
	int i,n,j,k,count_up = 0;
	while (1) {
		cin >> str1;
		if (str1 == "-") { break; }
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> k;
			for (j=k; j < str1.length(); j++) {
				str2 += str1[j];
			}
			for (j = 0; j < k; j++) {
				str2 += str1[j];
			}
			str1 = str2;
			if(i != (n-1))str2 = "";
		}
		cout << str2 << endl;
		str1 = "";
		str2 = "";
	}
	return 0;
}
