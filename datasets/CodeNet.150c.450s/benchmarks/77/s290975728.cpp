#include<iostream>
#include<vector>
#include<complex>
using namespace std;
typedef complex<int> CI;
typedef vector<CI> VCI;
#define REP(i,n) for(int i = 0;i < n;i++)
	
int dx[] = {1,-1,0,0},dy[] = {0,0,1,-1};

int main()
{
	int n;
	while(cin >> n,n)
	{
		VCI v;
		int x=10,y=10,cx,cy;
		REP(i,n)
		{
			cin >> cx >> cy;
			if(!(x == cx && y == cy))
			{
				v.push_back(CI(cx,cy));
			}
		}
		int l;
		cin >> l ;
		char word;
		int len;
		REP(i,l)
		{
			cin >> word >> len;
			int der;
			switch(word)
			{
				case 'N':der = 2;break;
				case 'E':der = 0;break;
				case 'S':der = 3;break;
				case 'W':der = 1;break;
			}
			REP(j,len)
			{
				x+=dx[der];y+=dy[der];
				REP(k,v.size())
				{
					if(x == v[k].real() && y == v[k].imag())
					{
						v.erase(v.begin()+k);
					}
				}
			}
		}
		if(v.size() == 0)cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	
	return 0;
}