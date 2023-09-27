#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int longlen = 0;
	string str, longstr;
	vector<pair<int, string> > vc;

	while (cin >> str)
	{
		if((int)strlen(str.c_str()) > longlen){
			longlen = strlen(str.c_str());
			longstr = str;
		}
		
		bool bl = true;
		vector<pair<int, string> >::iterator it = vc.begin();
		while(it != vc.end())
		{
			if(it->second == str){
				it->first--;
				bl = false;
			}
			it++;
		}

		if(bl){
			vc.push_back(make_pair(0, str));
		}
	}
	
	sort(vc.begin(), vc.end());

	cout << vc[0].second << " " << longstr << endl;

	return 0;
}