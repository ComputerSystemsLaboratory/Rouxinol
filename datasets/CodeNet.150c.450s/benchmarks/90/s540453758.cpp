#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>

using namespace std;

int bucket[101];
int ma = 0;

int main()
{
	int a;
	
	memset(bucket, 0, sizeof(bucket));
	
	while(cin>>a, !cin.eof())
	{
		bucket[a]++;
		ma = max( bucket[a], ma);
	}
	
	for( int i = 0; i < 101; i++)
	{
		if(bucket[i] == ma)
			cout << i << endl;
	}
	
	
	return 0;
}