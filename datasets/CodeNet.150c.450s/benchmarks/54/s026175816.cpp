#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int l, o, i, j, count;
	count = 0;
	string str,v,w;
	getline(cin, v);
	l = v.length();
	while(true){
		getline(cin, str);
		if (str == "END_OF_TEXT")break;
		o = str.length();
		for (i = 0; i < o; i++) {
			str[i] = tolower(str[i]);
		}
		for (j = 0; j < o - l + 1; j++) {
			w = "";
			while ('a' <= str[j] && str[j] <= 'z') {
				w += str[j];
				j++;
			}
			if (w == v)count++;
		}
	}
	cout << count << endl;
	return 0;
}
