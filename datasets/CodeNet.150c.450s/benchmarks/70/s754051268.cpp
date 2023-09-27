#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int dayNum[13]={
		0,31,29,31,30,31,30,31,31,30,31,30,31
	};
	string youbi[7]={
		"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"
	};
	int manth,day;
	while(cin>>manth>>day)
	{
		if(manth==0)
		{
			break;
		}
		int sum=0;
		for(int i=0;i<manth;i++)
		{
			sum+=dayNum[i];
		}
		sum+=day;
		cout<<youbi[sum%7]<<endl;
	}
}