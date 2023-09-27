#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int a[4],b[4];
	vector<int> r1,r2;
	while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]) != EOF)
	{
		int map[10]={0};
		int hit=0,blow=0;
		scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
		for (int i=0; i<4; i++)
		{
			map[a[i]] = 1;
		}
		for (int i=0; i<4; i++)
		{
			if (a[i] == b[i])
			{
				hit++;
			} else if (map[b[i]]==1)
			{
				blow++;
			}
		}
		r1.push_back(hit);
		r2.push_back(blow);
	}
	for (int i=0; i<r1.size(); i++)
	{
		cout << r1[i] << " " << r2[i] << endl;
	}
	return 0;
}