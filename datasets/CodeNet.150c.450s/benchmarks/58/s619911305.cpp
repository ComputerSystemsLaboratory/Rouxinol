#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	istringstream is(s);
	vector<int> st;
	while (is >> s)
	{
		size_t t = st.size();
		switch (s[0]) 
		{
		case '+': st[t - 2] += st[t - 1]; st.erase(st.end() - 1); break;
		case '-': st[t - 2] -= st[t - 1]; st.erase(st.end() - 1); break;
		case '*': st[t - 2] *= st[t - 1]; st.erase(st.end() - 1); break;
		default: st.push_back(stoi(s));
		}
	}

	cout << st[0] << endl;

	return 0;
}