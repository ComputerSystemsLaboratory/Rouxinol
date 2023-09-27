#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false);

	string stT = "";
	string tmp="";
	getline(cin, stT) ;
	stack<int> st;

	for (int i = 0; i < stT.length(); i++) {
		if (stT[i] != ' ') {
			if (isdigit(stT[i])) {
				tmp += stT[i];
			} else if (stT[i] == '+') {
				int tmp = st.top();
				st.pop();
				tmp += st.top();
				st.pop();
				st.push(tmp);
				i++;
			} else if (stT[i] == '-') {
				int tmp = st.top();
				st.pop();
				tmp = (tmp - st.top()) * -1;
				st.pop();
				st.push(tmp);
				i++;
			} else {
				int tmp = st.top();
				st.pop();
				tmp *= st.top();
				st.pop();
				st.push(tmp);
				i++;
			}
		}else{
			int stackTmp;
			sscanf(tmp.c_str(), "%d", &stackTmp);
			st.push(stackTmp);
			tmp = "";
		}
	}
	cout << st.top() << endl;
	return 0;
}