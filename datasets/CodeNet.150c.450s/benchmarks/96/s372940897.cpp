#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<string> assign(10);
	assign[1] = ".,!? ";
	assign[2] = "abc";
	assign[3] = "def";
	assign[4] = "ghi";
	assign[5] = "jkl";
	assign[6] = "mno";
	assign[7] = "pqrs";
	assign[8] = "tuv";
	assign[9] = "wxyz";
	
	for(int i = 0; i < n; ++i) {
		string input, output;
		cin >> input;

		int cnt = 0;
		string candidate = "";
		for(int j = 0; j < (int)input.size(); ++j) {
			if(input[j] == '0') {
				output += candidate;
				candidate = "";
				cnt = 0;
			}
			else {
				const string& str = assign[input[j] - '0'];
				candidate = str[cnt];
				cnt = (cnt + 1) % str.size();
			}
		}

		cout << output << endl;
	}

	return EXIT_SUCCESS;
}