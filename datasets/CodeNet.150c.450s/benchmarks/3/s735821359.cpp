
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	string str1, str2,str3,str4,str5;
	int i,n,j,k,a,b;
	cin >> str1;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> str2;
		if (str2 == "replace") {
			cin >> a >> b >> str3;
			str1.replace(a, (b - a+1), str3);
		}
		else if (str2 == "reverse") {
			cin >> a >> b;
			for (k = a; k <= b; k++) {
				str4 += str1[k];
			}
			reverse(str4.begin(), str4.end());
			str1.replace(a, (b - a+1), str4);
			str4 = "";
		}
		else {
			cin >> a >> b;
			for (j = a; j <= b; j++) {
				cout<< str1[j];
			}
			cout << endl;
		}
	}
	return 0;
}

