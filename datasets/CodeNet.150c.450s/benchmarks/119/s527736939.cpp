#include <bits/stdc++.h>
using namespace std;
int w, h, isl, v;
int a[2501];
deque<int> Q;
int main()
{
	while(cin >> w >> h && w>0)
	{
		for(int i=1; i<=w*h; i++)
		{
			cin >> a[i];
		}
		isl=0;
		for(int i=1; i<=w*h; i++)
		{
			if(a[i]==1)
			{
				isl++;
				Q.clear();
				Q.push_back(i);
				while(!Q.empty())
				{
					v=Q.front();
					Q.pop_front();
					if(v>w)
					{
						if(a[v-w]==1)
						{
							a[v-w]=0;
							Q.push_back(v-w);
						}
						if(v%w!=1)
						{
							if(a[v-w-1]==1)
							{
								a[v-w-1]=0;
								Q.push_back(v-w-1);
							}
						}
					}
					if(v%w!=1)
					{
						if(a[v-1]==1)
						{
							a[v-1]=0;
							Q.push_back(v-1);
						}
					}
					if(v%w!=0)
					{
						if(v>w)
						{
							if(a[v-w+1]==1)
							{
								a[v-w+1]=0;
								Q.push_back(v-w+1);
							}
						}
						if(a[v+1]==1)
						{
							a[v+1]=0;
							Q.push_back(v+1);
						}
						if(v+w<w*h)
						{
							if(a[v+w+1]==1)
							{
								a[v+w+1]=0;
								Q.push_back(v+w+1);
							}
						}
					}
					if(v+w<=w*h)
					{
						if(v%w!=1)
						{
							if(a[v+w-1]==1)
							{
								a[v+w-1]=0;
								Q.push_back(v+w-1);
							}
						}
						if(a[v+w]==1)
						{
							a[v+w]=0;
							Q.push_back(v+w);
						}
					}
				}
			}
		}
		cout << isl << endl;
	}
	return 0;
}