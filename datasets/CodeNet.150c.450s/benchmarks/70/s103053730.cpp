#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	while(1)
	{
		int h=20,y=4,m,d,W,ans;
		char *youbi[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
		cin>>m>>d;
		if(m==0)break;
		if(m<3)
		{
			y--;
			m+=12;
		}
		W=(y+y/4-y/100+y/400+(13*m+8)/5+d)%7;
		cout<<youbi[W]<<endl;
	}
	return 0;
}