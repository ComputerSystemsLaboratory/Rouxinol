#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;
int a[5][1000005],b[2][1000005][100],c[20];
int main()
{
	int n,y,m,d,s,i,p,j,i1,i2,k1,k2,t,l,k;
	i2=0;
	do
	{
		
		cin >> n >> l;
		b[0][n][i2]++;
		k=n;
		p=0;
		i1=0;
		while(p==0)
		{
			while(k!=0)
			{
				c[k%10]++;
				k=k/10;
			}
			k1=0;
			k2=0;
			t=0;
			for(i=9; i>0; i--)
				for(j=1; j<=c[i]; j++)
				{
					k1=k1*10+i;
					t++;
				}
			for(i=t+1; i<=l; i++)
				k1*=10;
			for(i=1; i<=9; i++)
				for(j=1; j<=c[i]; j++)
				{
					k2=k2*10+i;
					t++;
				}
			k=k1-k2;
			i1++;
			if(b[0][k][i2]==1)
			{
				a[0][i2]=b[1][k][i2];
				a[1][i2]=k;
				a[2][i2]=i1-b[1][k][i2];
				p=1;
			}
			else 
			{
				b[0][k][i2]=1;
				b[1][k][i2]=i1;
			}
			for(i=0; i<10; i++)
				c[i]=0;
		}
		i2++;
	}while(n!=0 || l!=0);
	for(i=0; i<i2-1; i++)
	cout << a[0][i] <<" " << a[1][i] << " " << a[2][i]<<endl;
}

