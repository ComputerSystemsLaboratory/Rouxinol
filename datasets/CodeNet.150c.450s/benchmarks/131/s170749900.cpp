#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <numeric>
#include <utility>

#define rep(i,n)	for(int i = 0;i < n;i++)
#define rep2(i,n)	for(int i = 1;i <= n;i++)
#define each(i,x)	for(auto & i : x)

using namespace std;

int main()
{
	int a,l;
	while(1)
	{
		cin >> a >> l;
		if(!a && !l)
			break;
		int i = 0;
		map<int,int> st;
		st.insert(make_pair(a,0));
		while(true)
		{
			i++;
			vector<int> str(l,0);
			int d = 1;
			rep(j,l)
			{
				str[j] = (a/d)%10;
				d *= 10;
			}
			sort(str.begin(),str.end());
			vector<int> bgg(str);
			reverse(bgg.begin(),bgg.end());
			int b = 0;
			int s = 0;
			rep(j,l)
			{
				b *= 10;
				s *= 10;
				b += bgg[j];
				s += str[j];
			}
			auto it = st.find(b-s);
			if(it != st.end())
			{
				cout << it -> second << ' ' << b-s << ' ' << (st.size() - it -> second) << endl;
				break;
			}
			else
			{
				a = b-s;
				st.insert(make_pair(a,i));
			}
		}
	}
	return 0;
}