#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int a[4],b[4];
	while(~scanf("%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3]))
	{
		bool v[4];
		int ch=0,cb=0;
		for(int i=0;i<4;i++)v[i]=true;
		for(int i=0;i<4;i++)
		{
			if(a[i]==b[i])
			{
				v[i]=false;
				ch++;
			}
		}
		for(int i=0;i<4;i++)
		{
			for(int j=0;v[i]&&j<4;j++)
			{
				if(a[i]==b[j])
				{
					cb++;
				}
			}
		}
		cout<<ch<<" "<<cb<<endl;
	}
	return 0;
}