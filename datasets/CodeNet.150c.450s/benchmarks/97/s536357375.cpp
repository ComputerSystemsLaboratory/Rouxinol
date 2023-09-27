#include<bits/stdc++.h>
using namespace std;
struct XY
{
	int x;
	int y;
};
int main ()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		vector<XY> a;
		XY j;
		j.x=0;
		j.y=0;
		a.push_back(j);
		for(int i=0;i<n-1;i++)
		{
			int x,y;
			cin>>x>>y;
			j=a[x];
			switch(y)
			{
			case 0:
				j.x--;
				break;
			case 1:
				j.y--;
				break;
			case 2:
				j.x++;
				break;
			case 3:
				j.y++;
				break;
			}
			a.push_back(j);
		}
		int q,w,e,r;
		q=0;w=0;e=0;r=0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i].x>q)q=a[i].x;
			if(a[i].x<w)w=a[i].x;
			if(a[i].y>e)e=a[i].y;
			if(a[i].y<r)r=a[i].y;
		}
		cout<<abs(q-w)+1<<" "<<abs(e-r)+1<<endl;
		
		cin>>n;
	}
}