#include <bits/stdc++.h>
using namespace std;
int N, M;
int d, p, L, s, c;
pair<int, int> x[10000];
int main()
{
	while(cin >> N >> M && N!=0)
	{
		L=0;
		for(int i=0; i<N; i++)
		{
			cin >> d >> p;
			x[i]=make_pair(p, d);
			L+=d;
		}
		sort(x, x+N);
		s=0;
		if(M<L)
		{
			c=0;
			for(int i=0; i<N; i++)
			{
				if(c+(x[i].second)>=L-M)
				{
					s+=(L-M-c)*(x[i].first);
					c+=x[i].second;
					break;
				}
				else
				{
					s+=(x[i].second)*(x[i].first);
					c+=x[i].second;
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}