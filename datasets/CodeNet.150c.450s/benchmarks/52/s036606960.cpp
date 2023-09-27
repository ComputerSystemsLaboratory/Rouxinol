#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> train;
	int a;
	vector<int>::iterator it;
	for(;cin >> a;)
	{
		if(a!=0)
			train.push_back(a);
		else
		{
			it=train.end()-1;
			cout << *it << endl;
			train.pop_back();
		}
	}
}