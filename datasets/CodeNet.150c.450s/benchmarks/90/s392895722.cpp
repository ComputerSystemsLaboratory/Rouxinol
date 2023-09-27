#include <iostream>
using namespace std;

int main()
{
	int count[101] = {0},value,max;

	while(cin >> value)
	{
		count[value]++;
	}
	max = count[0];
	for(int i=0;i<100;i++)
	{
		if(max < count[i]) max = count[i];
	}
	for(int i=0;i<100;i++)
	{
		if(max == count[i]) cout<<i<<endl;
	}
	return 0;
}