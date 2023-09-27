#include<iostream>
#include<cstring>
#include<stack>
#include<vector>
using namespace std;

int main() {
	char input[20000];
	cin >> input;

	stack<int> st1;
	stack<int> st2;
	stack<int> st3;
	int lv = 0;
	int total = 0;
	for (unsigned int i = 0; i < strlen(input); i++) {
		char c = input[i];
		if (c == '\\') {
			lv--;
			st1.push(i);
		}
		else if (c == '/') {
			lv++;
			if (!st1.empty()) {
				int newArea = i - st1.top(); st1.pop();
				total += newArea;
				int prevArea = 0;
				while (!st2.empty() && st3.top() < lv) {
					st3.pop();
					prevArea += st2.top(); st2.pop();
				}
				st2.push(newArea + prevArea);
				st3.push(lv);
			}
			else if (!st3.empty()) {
				st3.pop();
				st3.push(lv);
			}
		}
	}

	cout << total << endl;
	int n = st2.size();
	cout << n;
	vector<int> vec;
	while (!st2.empty()) {
		vec.push_back(st2.top());
		st2.pop();
	}
	for (int i = 0; i < n; i++) {
		cout << " " << vec[n-i-1];
	}
	cout << endl;
}

