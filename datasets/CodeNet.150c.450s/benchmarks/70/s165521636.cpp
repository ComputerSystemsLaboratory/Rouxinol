#include <iostream>
#include <string>
using namespace std;

int main()
{
	int m,d;
	int months[]={31,29,31,30,31,30,31,31,30,31,30,31};
	string days[]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};

	while(cin>>m>>d,m)
	{
		int mm=0,cnt=0;
		while(1)
		{
			if(mm+1<m)
			{
				cnt+=months[mm++];
				continue;
			}
			cnt+=d;
			break;
		}
		cout<<days[cnt%7]<<endl;
	}
	return 0;
}