#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	int n;
	cin >> n;
	int p1 = 0, p2 = 0;
	while (n--) {
		cin >> s1 >> s2;
		int length = (s1.size() >= s2.size() ? s1.size() : s2.size());
		int flag = 0;
		for (int i = 0; i < length; i++) {
			if (s1[i] < s2[i]) {
				flag = 2;
				break;
			}
			else if (s1[i] > s2[i]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			if (s1.size() > s2.size()) {
				flag = 1;
			}
			else if (s1.size() < s2.size()) {
				flag = 2;
			}
			else {
				flag = 0;
			}
		}
		if (flag == 0) {
			p1 += 1;
			p2 += 1;
		}
		else if (flag == 1) {
			p1 += 3;
		}
		else {
			p2 += 3;
		}
	}
	cout << p1 << " " << p2 << endl;
    return 0;
}