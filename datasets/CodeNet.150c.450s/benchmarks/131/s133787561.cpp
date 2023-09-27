#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;




int main() 
{
	int x,l;
	while(cin >> x >> l && ( x!=0 || l!=0 ))
	{
	
		//input
		int a[21][6]={};
		REP(i,l){
			a[0][i] = x/(int)(pow(10,l-i-1));
			x %=  (int)(pow(10,l-i-1));}
		
		for(int i=1;i<21;i++)
		{ 
			int max[6],min[6];
			REP(j,6){max[j]=a[i-1][j];min[j]=a[i-1][j];}
			sort(min,min+l);
			sort(max,max+l);
			reverse(max,max+l);
			
			REP(j,6){
				if(max[5-j]-min[5-j] < 0)
						{	a[i][5-j] = max[5-j]-min[5-j] +10;max[5-j-1]--;}
				else{a[i][5-j] = max[5-j]-min[5-j];}
			}
			
			bool tmp = true;
			REP(j,i)
			{
				tmp = true;
				REP(k,l)
				{
					if(a[j][k]!=a[i][k]){tmp = false;break;}
				}
				if(tmp)
				{
					cout << j << " ";
					int ans =0;
					REP(m,l){ans += a[i][m]*(int)pow(10,l-m-1);}
					cout << ans << " ";
					cout << i-j << endl;
					break;
				}
			}
			if(tmp) break;
		}
	}
	return 0 ;
}