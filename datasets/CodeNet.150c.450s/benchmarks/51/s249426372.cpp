#include <iostream>
using namespace std;

int main(void)
{
	bool b[100]={};
	for(int i=0;i<28;++i)
	{
		int n;
		cin >> n;
		b[n]=true;
	}
	for(int i=1;i<31;++i)
	{
		if(!b[i])
			cout << i << endl;
	}
	return 0;
}