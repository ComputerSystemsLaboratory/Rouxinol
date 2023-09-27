#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	vector<int> r;
	while (true)
	{
		int n=0,m=0,p=0;
		scanf("%d %d %d",&n,&m,&p);
		if (n==0 && m==0 && p==0){
			break;
		}
		int ticket=0,winner=0;
		for (int i=0; i<n; i++)
		{
			int x;
			scanf("%d", &x);
			ticket += x;
			if (i == m-1)
			{
				winner = x;
			}
		}
		if (winner != 0)
		{
			r.push_back(ticket*(100-p)/winner);
		} else {
			r.push_back(0);
		}
	}
	for(int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}