#include<iostream>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define MAX 100000
#define INF 1000000001

int a[MAX];
int l[MAX];
int main()
{
	int n;
	cin >> n;
	REP(i, n)
	{
		cin >> a[i];
		l[i] = INF;
	}
	int length = 0;
	l[length] = a[0];
	length++;
	FOR(i, 1, n)
	{
		if (l[length-1] < a[i])
		{
			l[length] = a[i];
			length++;
		}
		else
		{
			REP(j, length)
			{
				if (j == 0 && l[0] > a[i])
				{
					l[0] = a[i];
					break;
				}
				else if (l[j] < a[i]&&l[j+1]>a[i])
				{
					l[j+1] = a[i];
					break;
				}
			}
		}
	}
	cout << length << endl;

	return 0;
}