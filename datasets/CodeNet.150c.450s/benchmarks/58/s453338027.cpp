#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <list>
#include <stack>
#include <vector>

using namespace std;
	stack<int> st;

	vector<string> split(const string &s, char delim) {
		vector<string> elems;
		stringstream ss(s);
		string item;
		while (getline(ss, item, delim)) {
			if (!item.empty()) {
				elems.push_back(item);
			}
		}
		return elems;
	}



	int main(){
	string line;
	getline(cin, line);
	for(string s : split(line, ' ')){
		if (s == "+" || s == "-" || s == "*"){
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			if (s == "+"){
				st.push(a + b);
			}
			else if (s == "-"){
				st.push(b - a);
			}
			else{
				st.push(a * b);
			}
		}
		else{
			st.push(stoi(s));
		}
	}
	cout << st.top() << endl;
	return 0;
}