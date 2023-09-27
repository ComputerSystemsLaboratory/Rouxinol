#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include<string.h>
#include<vector>
#include<cstdio>
#include<sstream>

using namespace std;

namespace patch
{
	template < typename T > std::string to_string(const T& n)
	{
		std::ostringstream stm;
		stm << n;
		return stm.str();
	}
}

int main() {
	while (1) {
		int l;
		string str;
		cin >> str >> l;
		if (l == 0)break;
		int size = str.size();
		if(l-size>0)for (int i = 0; i < l - size; i++)str.insert(str.begin(), '0');
		//cout << str << endl;
		typedef string Str;
		vector<Str> ai;
		ai.push_back(str);

		int n = 1;
		while (1) {
			bool bre = false;
			string tstr = ai[n - 1];
			sort(tstr.begin(), tstr.end(), greater<int>());
			int max = atoi(tstr.c_str());
			sort(tstr.begin(), tstr.end());
			int min = atoi(tstr.c_str());
			int d = max - min;
			//cout <<max<<'-'<<min<<'='<< d << endl;

			for (int i = 0; i < n; i++) {
				int comp = atoi(ai[i].c_str());
				//cout << comp << endl;
				if (d == comp) {
					cout << i << ' ' << d << ' ' << n - i << endl;
					bre = true;
					break;
				}
			}

			if (bre)break;
			else {
				string pstr = patch::to_string(d);
				int psize = pstr.size();
				if(l-psize>0)for (int i = 0; i < l - psize; i++)pstr.insert(pstr.begin(), '0');
				ai.push_back(pstr);
				n++;
			}
		}
	}
	return 0;
}