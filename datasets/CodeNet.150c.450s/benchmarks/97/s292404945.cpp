#include <iostream>
using namespace std;
#define X 0
#define Y 1

int main()
{
	int n,table,dir,posi[200][2],xmax,xmin,ymax,ymin;
		
	while(cin>>n,n!=0)
	{
		posi[0][X]=0;
		posi[0][Y]=0;
		for(int i=1;i<n;i++)
		{
			cin>>table>>dir;
			switch(dir)
			{
			case 0:posi[i][X]=posi[table][X]-1;
				posi[i][Y]=posi[table][Y];
				break;
			case 1:posi[i][X]=posi[table][X];
				posi[i][Y]=posi[table][Y]-1;
				break;
			case 2:posi[i][X]=posi[table][X]+1;
				posi[i][Y]=posi[table][Y];
				break;
			case 3:posi[i][X]=posi[table][X];
				posi[i][Y]=posi[table][Y]+1;
				break;
			}
		}

		xmax=0;
		xmin=0;
		for(int i=1;i<n;i++)
		{
			if(posi[i][X]>xmax)
				xmax=posi[i][X];
			if(posi[i][X]<xmin)
				xmin=posi[i][X];
		}

		ymax=0;
		ymin=0;
		for(int i=1;i<n;i++)
		{
			if(posi[i][Y]>ymax)
				ymax=posi[i][Y];
			if(posi[i][Y]<ymin)
				ymin=posi[i][Y];
		}

		cout<<xmax-xmin+1<<' '<<ymax-ymin+1<<endl;
	}
}