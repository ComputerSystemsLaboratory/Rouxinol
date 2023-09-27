#include<iostream>
using namespace std;
int main ()
{
	int n,m;
	long hi1[10001],a,cnt=0;
	cin >> n;
	for(int i=0;i<n;i++)	cin >> hi1[i];
	cin >> m;
	for(int i=0;i<m;i++)
	{
		cin >> a;
		for(int j=0;j<n;j++)
		{
			if(hi1[j]==a)
			{
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}