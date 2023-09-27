#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
	string s;
	int q;
	cin >> s >> q;
	cin.ignore();
	
	string buf;
	while (q)
	{
		getline(cin, buf);
		
		//cout << "DEBUG:" << buf << endl;
		
		if (buf.find("replace ") != string::npos)
		{
			char cmd[10] = {0};
			int a1, a2;
			char a3[1001] = {0};
			sscanf(buf.c_str(), "%s %d %d %s", cmd, &a1, &a2, a3);
			s.replace(a1, (a2+1)-a1, string(a3));
			//cout << "DEBUG:replaced:" << s << endl;
		}
		else if (buf.find("reverse ") != string::npos)
		{
			char cmd[10] = {0};
			int a1, a2;
			sscanf(buf.c_str(), "%s %d %d", cmd, &a1, &a2);
			string sub = s.substr(a1, (a2+1)-a1);
			//cout << "DEBUG:sub( ):" << sub << endl;
			reverse(sub.begin(), sub.end());
			//cout << "DEBUG:sub(r):" << sub << endl;
			size_t subsize = sub.size();
			for (int i = a1, j = 0; i < a1 + subsize; i++, j++) {
				s[i] = sub[j];
			}
			//cout << "DEBUG:reversed:" << s << endl;
		}
		else if (buf.find("print ") != string::npos)
		{
			char cmd[10] = {0};
			int a1, a2;
			sscanf(buf.c_str(), "%s %d %d", cmd, &a1, &a2);
			cout << s.substr(a1, (a2+1)-a1) << endl;
		}
		q--;
	}
	
	return 0;
}