#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define rep(i,n)	for(int i=0;i<n;i++)

int main() {
	string s1 = ".,!? ", s2 = "abc", s3 = "def", s4 = "ghi",
		s5 = "jkl", s6 = "mno", s7 = "pqrs", s8 = "tuv", s9 = "wxyz";
	int n;
	cin >> n; 
	rep(i, n) {
		string str;
		cin >> str;
		int j = 0;
		int p = -114;
		while (j < str.size()) {
			int cnt = 0;
			while (true) {
				if (str[j] - '0' == 0)break;
				j++;
				cnt++;
			}
			if (j == 0) {
				j++;
				continue;
			}
			switch (str[j - 1] - '0') {
			case 1: cout << s1[(cnt - 1) % s1.size()];
				break;
			case 2: cout << s2[(cnt - 1) % s2.size()];
				break;
			case 3: cout << s3[(cnt - 1) % s3.size()];
				break;
			case 4: cout << s4[(cnt - 1) % s4.size()];
				break;
			case 5: cout << s5[(cnt - 1) % s5.size()];
				break;
			case 6: cout << s6[(cnt - 1) % s6.size()];
				break;
			case 7: cout << s7[(cnt - 1) % s7.size()];
				break;
			case 8: cout << s8[(cnt - 1) % s8.size()];
				break;
			case 9: cout << s9[(cnt - 1) % s9.size()];
				break;
			default:
				break;
			}
			j++;
		}
		cout << endl;
	}
}