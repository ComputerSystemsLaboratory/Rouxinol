#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;



int main() {

	stack<int> st;
	vector <string> vec;
	string s;


	while (cin >> s) {
		vec.push_back(s);
	}

	for (int i = 0; i < (int)vec.size(); i++) {

		if (vec[i] == "+") {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			int c = a + b;
			st.push(c);
		}

		else if (vec[i] == "-") {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			int c = b - a;
			st.push(c);
		}

		else if (vec[i] == "*") {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			int c = a * b;
			st.push(c);
		}

		else {
			int num = stoi(vec[i]);
			st.push(num);
		}



	}

	int ans = st.top();

	cout << ans << endl;








	return 0;
}



