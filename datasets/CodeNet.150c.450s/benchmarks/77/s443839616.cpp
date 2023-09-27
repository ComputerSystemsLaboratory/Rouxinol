#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	vector<string> r;
	while (true)
	{
		int gem=0,gemgot=0;
		int map[21][21]={{0}};
		cin >> gem;
		if (gem==0){break;}
		for(int i=0;i<gem;i++)
		{
			int x=0,y=0;
			scanf("%d %d",&x,&y);
			map[x][y] = 1;
		}
		int rx=10,ry=10;
		int n;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			int d=0;
			int dx=0,dy=0;
			char dest[8];
			scanf("%s %d",dest,&d);
			if (dest[0] == 'N'){
				dy = 1;
			} else if (dest[0] == 'S'){
				dy = -1;
			} else if (dest[0] == 'W'){
				dx = -1;
			} else if (dest[0] == 'E'){
				dx = 1;
			}
			for (int j=0;j<d;j++)
			{
				rx += dx;
				ry += dy;
				if (map[rx][ry] == 1)
				{
					map[rx][ry] = 0;
					gemgot++;
				}
			}
		}
		if (gem == gemgot){
			r.push_back("Yes");
		} else {
			r.push_back("No");
		}
	}
	for(int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}