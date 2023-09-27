#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;

struct card
{
	int num;
	char val;
};

int main()
{
	int n;
	card bb[50], se[50];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char sss;
		int q;
		cin >> sss >> q;
		bb[i].val = sss; se[i].val = sss;
		bb[i].num = q; se[i].num = q;
	}
	for (int i = 0; i < n; i++)
	{
		for (int s = n - 1; s > i; s--)
		{
			if (bb[s].num < bb[s - 1].num)
			{
				card m = bb[s];
				bb[s] = bb[s - 1];
				bb[s - 1] = m;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << bb[i].val << bb[i].num;
		if (i != n - 1)cout << " ";
	}
	cout << endl;
	cout << "Stable" << endl;
	for (int i = 0; i < n; i++)
	{
		int j=se[i].num;
		int w=i;
		for (int h = i + 1; h < n; h++)
		{
			if (j > se[h].num)
			{
				j = se[h].num;
				w = h;
			}
		}
		card a = se[w];
		se[w] = se[i];
		se[i] = a;
	}
	bool aho = false;
	for (int i = 0; i < n; i++)
	{
		if (bb[i].val != se[i].val)aho = true;
		cout <<(char)se[i].val << se[i].num;
		if (i != n - 1)cout << " ";
	}
	cout << endl;
	if (aho)cout << "Not stable" << endl;
	else cout << "Stable" << endl;
	return 0;

}