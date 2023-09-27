#include<iostream>

using namespace std;

int map[30][31];
int w,n;

void search(int s_x,int x,int y)
{
/*	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<w;j++)
		{
			cout << map[j][i] << " " ;
		}
		cout << endl;
	}
	
	getchar();
	system("cls");
*/	
	if(y==n)
	{
		map[x][n]=s_x+1;
		return ;
	}
	
	if(map[x][y]!=100)
		x=map[x][y];
	
	search(s_x,x,y+1);
}

int main()
{
	int a1,b1;
	int i,j;
	char a;
	
	cin >> w ;
	cin >> n ;
	
	for(i=0;i<=n;i++)
		for(j=0;j<w;j++)
			map[j][i]=100;
	
	for(i=0,j=0;i<n;i++,j++)
	{
		cin >> a1 >> a >> b1 ;
		map[a1-1][j]=b1-1;
		map[b1-1][j]=a1-1;
	}
	
/*	for(i=0;i<=n;i++)
	{
		for(j=0;j<w;j++)
		{
			cout << map[j][i] << " " ;
		}
		cout << endl;
	}
	
	getchar();
	system("cls");
*/	
	for(i=0;i<w;i++)
	{
		search(i,i,0);
	}
	
	for(i=0;i<w;i++)
	{
		cout << map[i][n] << endl;
	}
}