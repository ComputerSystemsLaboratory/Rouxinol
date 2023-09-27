#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<string>
#include<cstdlib>
#include<list>
using namespace std;

#define rep(i,n) for(i=0;i<n;i++)
#define rep2(i,n) for(i=1;i<=n;i++)

int main()
{
	int n,m;
	int i,j,k;
	static int a[1500001];
	while(1){
		cin >> n >> m;
		if(n==0 && m ==0) break;
		
		for(i=0;i<1500001;i++) a[i]=0;
		int h[1501],w[1501];
		h[0]=0;
		for(i=1;i<=n;i++){
			cin >> h[i];
			h[i]+=h[i-1];
		}
		w[0]=0;
		for(i=1;i<=m;i++){
			cin >> w[i];
			w[i]+=w[i-1];
		}
		
		for(i=0;i<=n;i++){
			for(j=0;j<i;j++){
				a[h[i]-h[j]]++;
			}
		}
		
		int c=0;
		for(i=0;i<=m;i++){
			for(j=0;j<i;j++){
				c+= a[w[i]-w[j]];
			}
		}
//		for(i=0;i<50;i++) cout << i << "   " << a[i] << endl;
		cout << c << endl;
		
	}
	return 0;	
}