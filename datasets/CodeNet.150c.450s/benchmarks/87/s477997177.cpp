#include <cstdio>
#include <cstdlib>
#include <utility>
#include <typeinfo>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>
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
	int n;
	while(cin>>n&&n!=0)
	{
		int a[10][5]={};
		REP(i,n){REP(j,5){cin>>a[i][j];}}
		
		int ans(0);
		
		while(true)
		{
			int count(0);
			bool b[10]={};//i列目を消すならフラグ
			int c[10]={};//連続する一つ目の位置
			int d[10]={};//連続した個数
			int e[10]={};//連続した数字
			
			//一行毎に判定。○なら数字を10に変えて、ポイントを足す
			REP(i,n){
				c[i]=0;
				d[i]=1;	
				e[i]=a[i][0];
				REP(j,4)
				{
					if(a[i][j+1]==a[i][j])
					{
						d[i]++;
						if(d[i]>=3&&e[i]!=10){b[i]=true;}
					}
					else
					{
						if(b[i]){break;}
						else
						{
							c[i]=j+1;
							d[i]=1;
							e[i]=a[i][j+1];
						}
					}
				}
			}
		
			for(int i=0;i<n;i++)
			{
				if(b[i])
				{
					count++;
					ans+=e[i]*d[i];
					for(int j=c[i];j<c[i]+d[i];j++)
					{
						a[i][j]=10;
					}
				}
			}
		
			//消した行が1以上なら、タテに下詰する
			if(count>0)
			{
				for(int i=0;i<5;i++)
				{
					for(int j=0;j<n;j++)
					{
						if(a[j][i]==10)
						{
							for(int k=j;k>0;k--)
							{
								int tmp = a[k][i];
								a[k][i]=a[k-1][i];
								a[k-1][i]=tmp;
							}
						}
					}
				}
				
			}
			//消した行が0なら終わり
			if(count==0){break;}
			
		}
		cout<<ans<<endl;
	}
	return 0;
}