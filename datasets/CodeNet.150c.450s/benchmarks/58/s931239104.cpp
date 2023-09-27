#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
using namespace std;
int main() {
	vector<int> line;
	char code[10];
	while (cin >> code) {
		
		if (code[0] >= '0'&&code[0] <= '9') {
			line.push_back(atoi(code));
		}
		else {
			switch (code[0]) {
			case '+':
				*(line.end() - 2) = *(line.end() - 2) + *(line.end() - 1);
				break;
			case'-':
				*(line.end() - 2) = *(line.end() - 2) - *(line.end() - 1);
				break;
			case'*':
				*(line.end() - 2) = *(line.end() - 2) * *(line.end() - 1);
				break;
			case'/':
				*(line.end() - 2) = *(line.end() - 2) / *(line.end() - 1);
				break;
			}
			line.pop_back();
		}
	}
	cout << line[0] << endl;
	return 0;
}