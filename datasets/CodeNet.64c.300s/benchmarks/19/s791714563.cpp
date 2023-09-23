#include "iostream"
using namespace std;

int a[5000],b[5001];

int main(int argc, char const *argv[])
{
	int n;
	b[0]=0;
	while(cin>>n,n)
	{
		int ma=-5000*100000;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			/*if (ma<a[i])
			{
				ma=a[i];
			}*/
		}
	 	for (int i = 0; i < n; ++i)
		{
			b[i+1]=b[i]+a[i];
		}
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 0; i+j <= n; ++j)
			{
				if(ma<b[i+j]-b[j])
				{
					ma=b[i+j]-b[j];
				}
			}
		}
		cout<<ma<<"\n";
	}
	return 0;
}