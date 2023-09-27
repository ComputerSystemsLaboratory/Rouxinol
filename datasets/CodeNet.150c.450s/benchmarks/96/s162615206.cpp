#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	string S, message[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	int N, k;
	cin >> N;
	while (N--) {
		cin >> S;
		int count = -1, k = S[0] - '0';
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == '0') {
				if (k != 0) {
					count %= message[k].size();
					cout << message[k][count];
				}
				k = S[i + 1] - '0';
				count = -1;
			}else {
				count++;
			}
		}
		cout << endl;
	}	
	return 0;
}