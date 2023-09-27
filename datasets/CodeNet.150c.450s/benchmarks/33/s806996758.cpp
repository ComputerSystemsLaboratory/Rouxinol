#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int x, y, s;
int m;
int p, q;
int main()
{
	while(cin >> x >> y >> s && x>0)
	{
		m=0;
		for(int i=1; i<s; i++)
		{
			p=(i+1)*100/(100+x);
			if((p*(100+x)/100)==i+1)
			{
				p-=1;
			}
			if(p*(100+x)/100<i)
			{
				p=-1;
			}
			q=(s-i+1)*100/(100+x);
			if((q*(100+x)/100)==s-i+1)
			{
				q-=1;
			}
			if(q*(100+x)/100<s-i)
			{
				q=-1;
			}
			if((p+1)*(q+1)!=0)
			{
				m=max(((p*(100+y)/100)+(q*(100+y)/100)), m);
			}
		}
		cout << m << endl;
	}
	return 0;
}