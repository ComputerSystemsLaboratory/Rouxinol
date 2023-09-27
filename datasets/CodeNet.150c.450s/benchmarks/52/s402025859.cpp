#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> S;

	int c;
	while(cin>>c)
	{
		if(c==0)
			cout<<S.back()<<endl,
			S.pop_back();
		else
			S.push_back(c);
	}
	return 0;
}