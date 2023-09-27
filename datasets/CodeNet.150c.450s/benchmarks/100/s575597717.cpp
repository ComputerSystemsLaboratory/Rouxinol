#include <iostream>
using namespace std;

int main()
{
	int x;
	unsigned long long int ret=1;
	cin >> x;
	for(int i=1;i<=x;i++)
		ret*=i;
	if(!x)ret=0;
	cout << ret << endl;
}