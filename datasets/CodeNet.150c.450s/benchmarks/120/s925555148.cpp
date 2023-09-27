#include<iostream>

using namespace std;

int count=0,ans;
int array[11],senbei[2][11][10001];

void loop(int n,int height,int width)
{
	if(n==height)
	{
		int addtable=0;
		for(int i=0;i<width;i++)
		{
			int table=0;
			for(int j=0;j<height;j++)
			{
				table+=senbei[array[j]][j][i];
			}
			addtable+=max(table,height-table);
		}
		ans=max(addtable,ans);
		return ;
	}
	array[n]=0;
	loop(n+1,height,width);
	array[n]=1;
	loop(n+1,height,width);
	return ;
}

int main()
{
	int h,w;
	for(;;)
	{
		cin >> h >> w;
		if(h==0)
			break;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				cin >> senbei[0][i][j] ;
				senbei[1][i][j]=(senbei[0][i][j]+1)%2;
			}
		}
/*
		cout << "senbei1" << endl;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				cout << senbei[0][i][j] << " "  ;
			}
			cout << endl;
		}
		cout << "senbei2" << endl;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				cout << senbei[1][i][j] << " "  ;
			}
			cout << endl;
		}
//*/		
		ans=0;
		loop(0,h,w);
		cout << ans << endl;
	}
}