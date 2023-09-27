#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int f1[1000001];
int f2[1000001];

int main()
{
	int t_num[182];
	int t_num_odd[182];
	
	int k=0;
	for (int i=1;i<182;++i)
	{
		t_num[i-1] = i*(i+1)*(i+2)/6;
		if (t_num[i-1] % 2 == 1)
		{
			t_num_odd[k] = t_num[i-1];
			++k;
		}		
	}
	
	memset(f1,1000001,sizeof(f1));
	f1[0] = 0;
	for (int j=0;j<181;++j)
	{
		for (int i=t_num[j];i<=1000000;++i)
		{
			if (i>=t_num[j]) f1[i] = min(f1[i],f1[i-t_num[j]]+1);
		}
	}
	
	memset(f2,1000001,sizeof(f2));
	f2[0] = 0;
	for (int j=0;j<k;++j)
	{
		for (int i=t_num_odd[j];i<=1000000;++i)
		{
			if (i>=t_num_odd[j]) f2[i] = min(f2[i],f2[i-t_num_odd[j]]+1);
		}
	}
	
	int n;
	cin >> n;
	
	while (n)
	{
		
		cout << f1[n] << " ";
		cout << f2[n] << endl;
		cin >> n;
		
	}
	return 0;
	
}