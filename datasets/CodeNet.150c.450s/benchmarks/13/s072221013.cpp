#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	string s3 = s1 + s1;
	bool flag = false;
	for (int i = 0; i < s1.size() + s2.size(); i++) {
		if (s3[i] == s2[0] && s1.size()-i >= 0) {
			string s4 = "";
			for (int j = 0; j < s2.size(); j++) {
				s4 += s3[i + j];
			}
			//cout << s4 << endl;
			if (s4 == s2) {
				flag = true;
				break;
			}
		}
	}
	cout << (flag ? "Yes" : "No") << endl;
	
    return 0;
}