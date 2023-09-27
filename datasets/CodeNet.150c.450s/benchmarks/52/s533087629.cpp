#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int n,right,i=0;
	vector<int> train;
	while(cin>>n)
	{
		vector<int>::iterator it = train.begin();
		while(it!=train.end()) ++it;
		if(n==0)
		{
			--it;
			right = *it;
			cout<<right<<endl;
			train.pop_back();
			i++;
		}
		else
		train.push_back(n);
	}
	return 0;
}