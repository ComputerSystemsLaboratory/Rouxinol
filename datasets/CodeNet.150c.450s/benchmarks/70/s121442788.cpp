#include<iostream>

using namespace std;

int main()
{
	int month[12];

	month[0]=31;
	month[1]=29;
	month[2]=31;
	month[3]=30;
	month[4]=31;
	month[5]=30;
	month[6]=31;
	month[7]=31;
	month[8]=30;
	month[9]=31;
	month[10]=30;
	month[11]=31;

	int hoge,fuga;

	hoge = 1;

	int i;
	int count=0;

	while(hoge!=0)
	{
		count = 0;
		cin >> hoge >> fuga;
		//cout << count << endl;
		for(i=0;i<hoge-1;i++)
		{
			count+=month[i];
		}	
		//cout << count << endl;

		count+=fuga;

		//cout << count << endl;

		int flag = 0;
	
		flag = count % 7;

		if(flag==0 & hoge!=0)
		{
			cout << "Wednesday" <<endl;
		}
		if(flag==1 & hoge!=0)
		{
			cout << "Thursday" <<endl;
		}
		if(flag==2 & hoge!=0)
		{
			cout << "Friday" <<endl;
		}
		if(flag==3 & hoge!=0)
		{
			cout << "Saturday" <<endl;
		}
		if(flag==4 & hoge!=0)
		{
			cout << "Sunday" <<endl;
		}
		if(flag==5 & hoge!=0)
		{
			cout << "Monday" <<endl;
		}
		if(flag==6 & hoge!=0)
		{
			cout << "Tuesday" <<endl;
		}
	}
}