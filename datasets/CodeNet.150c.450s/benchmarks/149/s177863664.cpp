#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
#include <set>
#include <list>
using namespace std;

enum command {
	unite = 0,
	same = 1
};
void set_print(const char* msg, const set<int> &s)
{
	cout << msg;
	cout << " " << s.size() << " [";
	const char * delim = "";
	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
	{
		int c = *it;
		cout << delim << (int)c;
		delim = ",";
	}
	cout << " ]" << endl;
}
int main(){
		std::istream & c_in = cin;
	int n, q;
	c_in >> n >> q;
	typedef list< set<int> > SETS;
	SETS sets;
	for (int i = 0; i < n; ++i)
	{
		set<int> s;
		s.insert(i);
		sets.push_back(s);
	}

	for (int i = 0; i < q; ++i)
	{
		int com, x, y;
		c_in >> com >> x >> y;
		if (com == unite)
		{
			//unite(x,y): x ??????????????? Sx ??¨ y ??????????????? Sy ??????????????????
			SETS::iterator sx = sets.end(), sy = sets.end();
			for (SETS::iterator it = sets.begin(); it != sets.end() && (sx == sets.end() || sy == sets.end()); ++it)
			{
				if (it->find(x) != it->end())
				{
					sx = it;
				}
				if (it->find(y) != it->end())
				{
					sy = it;
				}
			}
			if (sx != sy)
			{
				sx->insert(sy->begin(), sy->end());
				//{
				//	set_print("sx=", *sx);
				//	set_print("sy=", *sy);
				//}
				sets.remove(*sy);
			}
		}
		else if (com == same)
		{
			for (SETS::iterator it = sets.begin(); it != sets.end(); ++it)
			{
				bool notfindx = it->find(x) == it->end();
				bool notfindy = it->find(y) == it->end();

				if (notfindx && notfindy)
				{
					continue;
				}
				int v = (!notfindx) && (!notfindy) ? 1 : 0;
				cout << v << endl;
				break;
			}

		}
	}
}