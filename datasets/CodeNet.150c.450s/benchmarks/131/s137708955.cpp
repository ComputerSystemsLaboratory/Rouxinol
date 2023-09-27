#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	while (true)
	{
		int I[21];
		int a, L;
		cin >> a >> L;
		I[0] = a;
		if (a == 0 && L == 0)break;
		for (int cnt = 1; cnt < 21; cnt++)
		{	
			bool end = false;
			int n = 1;
			int Max = 0;
			int Min = 0;
			for (int m = 1; m < L; m++)n = n * 10;
			int m1 = n;
			int m2 = n;
			int* pt;
			pt = new int[L];
			for (int l = 0; l < L; l++,n=n/10)
			{
				pt[l] = int(a / n);
				if (pt[l] != 0)a = a-(int(a/n)*n);
			}
			sort(pt,&pt[L]);
			for (int n = 0; n < L; n++)
			{
				if (pt[n] != 0)
				{
					Min +=pt[n] * m1;
				}
				m1 = m1 / 10;
			}
			reverse(pt, &pt[L]);
			for (int n = 0; n < L; n++)
			{
				if (pt[n] != 0)
				{
					Max += pt[n] * m2;
				}
				m2 = m2 / 10;
			}
			I[cnt] = Max - Min;
			for (int i = 0; i < cnt; i++)
			{
				if (I[cnt] == I[i])
				{
					cout << i << " " << I[cnt] << " " << cnt - i << endl;
					end = true;
					break;
				}
			}
			if (end==true)break;
			a = I[cnt];
		}//for
	}//while
	return 0;
}