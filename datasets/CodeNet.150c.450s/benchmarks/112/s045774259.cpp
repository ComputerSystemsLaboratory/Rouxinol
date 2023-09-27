
#include <vector>
#include <iostream>
using namespace std;

typedef pair<char, char> TRS;

int main(void)
{
	int n;
	while(1)
	{
		TRS currTrs;
		vector<TRS> trsArr;
		cin >> n;
		if(n == 0)break;
		for(int i=0; i<n; i++)
		{
			cin >> currTrs.first >> currTrs.second;
			trsArr.push_back(currTrs);
		}
		
		char c;
		string s;
		cin >> n;
		for(int i=0; i<n; i++)
		{
			cin >> c;
			cin.clear();
			for(size_t trsId=0; trsId<trsArr.size(); trsId++)
			{
				if(c == trsArr[trsId].first)
				{
					c = trsArr[trsId].second;
					break;
				}
			}
			s.push_back(c);
		}
		cout << s.c_str() << endl;
	}
	return 0;
}