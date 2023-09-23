#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int a;
long long int hasil; 

int main()
{
	
	hasil=1; 
	scanf("%lld",&a);
	for(int loop=a;loop>=1;loop--)
	{
		hasil=hasil*loop;
	}
	printf("%lld\n",hasil);
	return 0; 
}