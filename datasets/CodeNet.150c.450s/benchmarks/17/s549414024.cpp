#include <iostream>
#include <algorithm>
#include <cstdio>
#include <deque>
#include <functional>

using namespace std;

int main(void)
{
	int a,b,c,d,e;
	int kari[10];
	while(cin>>a>>b>>c>>d>>e)
	{
		deque<int> nums;
		nums.push_back(a);
		nums.push_back(b);
		nums.push_back(c);
		nums.push_back(d);
		nums.push_back(e);
		sort( nums.begin(), nums.end(), greater<int>() );
		deque<int>::iterator it = nums.begin();
		int i=0;
		while( it != nums.end() )
		{
			kari[i]=*it;
			++it,++i;
		}
		nums.clear();
		cout<<kari[0]<<" "<<kari[1]<<" "<<kari[2]<<" "<<kari[3]<<" "<<kari[4]<<endl;
	}
	return 0;
}