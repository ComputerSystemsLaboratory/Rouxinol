#include<iostream>
#define FORI(N) for(int i=0;i<N;i++)
#define FORL(N) for(int l=0;l<N;l++)
using namespace std;

int main()
{
	int n;
	int S[10000];
	int q;
	int T[500];
	int ans=0;
	cin >> n;
	FORI(n)cin >> S[i];
	cin >> q;
	FORI(q)cin >> T[i];
	FORI(q)
	{
		FORL(n)
		{
			if (S[l] == T[i])
			{
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}