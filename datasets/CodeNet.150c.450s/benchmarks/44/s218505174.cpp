#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a[5],b[5],t1,t2;
	while(scanf("%d%d%d%d",a+1,a+2,a+3,a+4)!=EOF)
	{
		scanf("%d%d%d%d",b+1,b+2,b+3,b+4);
		t1=t2=0;
		for (int i=1;i<=4;i++)
		{
			if (a[i]==b[i]) t1++;
			for (int j=1;j<=4;j++) if (i!=j&&a[i]==b[j]) t2++;
		}
		cout<<t1<<" "<<t2<<endl;
	}
	return 0;
}