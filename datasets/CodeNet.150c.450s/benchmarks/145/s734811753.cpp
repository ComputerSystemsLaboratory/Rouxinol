#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string s, mode, longest;
	typedef map<string, int> dic_t;
	dic_t dic;
	while (cin >> s) {
		if (++ dic[s] > dic[mode])
			mode = s;
		if (s.size() > longest.size())
			longest = s;
	}
	cout << mode << ' ' << longest << endl;
	return 0;
}