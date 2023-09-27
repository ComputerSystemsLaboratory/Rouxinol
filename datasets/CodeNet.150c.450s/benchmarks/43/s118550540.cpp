#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a,b;
	int asum,bsum;
	while(1)
	{
		cin >> n;
		if(n == 0)
			return 0;
		asum=0;bsum=0;
		for(int i=0;i<n;i++)
		{
			cin >> a >> b;
			if(a>b)
			{
				asum=asum+a+b;
			}
			if(b>a)
				bsum=bsum+a+b;
			if(a==b)
			{
				asum+=a;
				bsum+=b;
			}
		}
		cout << asum << ' ' << bsum << endl;
	}
	return 0;
}