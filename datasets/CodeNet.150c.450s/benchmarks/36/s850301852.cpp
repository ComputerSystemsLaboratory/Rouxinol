#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int area=0,ans=0,i=1;
		while(1)
		{
			if(i*n==600-n)
				break;
			if(i*n>600-n)
				break;
			area=(i*n)*(i*n)*n;
			ans += area;
			area=0;
			i++;
		}
		ans += (600-n)*(600-n)*n;
		cout<<ans<<endl;
	}
	return 0;
}