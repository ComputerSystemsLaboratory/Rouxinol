#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	string str, m_str = "", ans = "";
	map<string, int> word;
	while (cin >> str) {
		word[str]++;
		if (str.size() > m_str.size()) m_str = str;
		if (word[str] > word[ans]) ans = str;
	}
	cout << ans << " " << m_str << endl;
}