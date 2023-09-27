#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef pair<int, int> P;

int strToInt(string str)
{
	int num = 0;
	int multiple = 1;
	for(int i = str.size() - 1; i >= 0; --i)
	{
		num += (str[i] - '0') * multiple;
		multiple *= 10;
	}
	return(num);
}

void solve()
{
	string tmpStr;
	int L;
	while(true)
	{
		cin >> tmpStr;
		cin >> L;
		if(tmpStr == "0" && L == 0)
		{
			break;
		}
		int n = tmpStr.size();
		string str;
		for(int i = 0; i < L - n; ++i)
		{
			str += "0";
		}
		for(int i = 0; i < n; ++i)
		{
			str += tmpStr[i];
		}
		vector<P> pairs;
		pairs.push_back(P(strToInt(str), 0));
		int count = 0;
		bool flag = false;
		while(!flag)
		{
			++count;
			vector<char> c(L);
			for(int i = 0; i < L; ++i)
			{
				c[i] = str[i];
			}
			sort(c.begin(), c.end());
			string sMin = "";
			for(int i = 0; i < L; ++i)
			{
				sMin += c[i];
			}
			string sMax = sMin;
			reverse(sMax.begin(), sMax.end());
			int a = strToInt(sMax) - strToInt(sMin);
			for(int i = 0; i < pairs.size(); ++i)
			{
				if(pairs[i].first == a)
				{
					cout << i << " " << a << " " << count - i << endl;
					flag = true;
					break;
				}
			}
			pairs.push_back(P(a, count));
			for(int i = 0; i < L; ++i)
			{
				str[i] = a % 10 + '0';
				a /= 10;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}