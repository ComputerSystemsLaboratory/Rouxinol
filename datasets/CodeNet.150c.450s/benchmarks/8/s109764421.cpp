#include<iostream>
#include<string>
using namespace std;
int main() {
	int n,i,j,k,A=0,B=0,count=0;
	string str1,str2,str;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> str1 >> str2;
		str = str1 + str2;
		for (j = 0; j < str.size(); j++) {

			if (str1[j] < str2[j]) {
				B += 3;
				break;
			}
			else if (str1[j] > str2[j]) {
				A += 3;
				break;
			}
			else if (str1 == str2) {
				A += 1;
				B += 1;
				break;
			}
			else if (str1[j] == str2[j]) {
				continue;
			}
		}
	}
	cout << A <<" "<< B<<endl;
	return 0;
}