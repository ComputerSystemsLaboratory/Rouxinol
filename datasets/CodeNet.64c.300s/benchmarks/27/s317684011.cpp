#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n, x, s;
int main()
{
	while(cin >> n >> x && (n!=0))
	{
		s=0;
		for(int i=n; i*3>=x+3; i--)
		{
			if(((x-i)>=3)&&((x-i)%2==0))
			{
				s+=min(((x-i)/2)-1, i-1-((x-i)/2));
			}
			else if((x-i)>=3)
			{
				s+=min((x-i)/2, i-1-((x-i)/2));
			}
		}
		cout << s << endl;
	}
	return 0;
}