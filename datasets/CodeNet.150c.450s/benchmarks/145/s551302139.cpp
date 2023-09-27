#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str[10000],mstr,lstr;
	int size=0,max=0,i,j;
	
	for(i=0;cin >> str[i];i++)
	{
		if(size<str[i].size())
		{
			size=str[i].size();
			lstr=str[i];
		}
	}
	for(j=0;j<i;j++)
	{
		int count=0;
		for(int k=0;k<i;k++)
			if(str[j]==str[k])
				count++;
		if(max<count)
		{
			max=count;
			mstr=str[j];
		}
	}
	cout << mstr << " " << lstr << endl;
}