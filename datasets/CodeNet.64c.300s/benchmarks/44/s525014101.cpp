#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
#include <complex>
#define  rep(i,n) for(int i=0;i<(n);i++)
#define  REP(i,n) for(int i=1;i<(n);i++)
#define  rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define  VI	vector<int>
#define	 VS vector<string>
#define  all(a) (a).begin(),(a).end()
#define  debug(x) cout<<#x<<": "<<x<<endl

using namespace std;
int n;
int s[11]={0};
int d[11][11]={0};
void warshall_floyd(){
	for(int k=0;k<10;k++){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
				}
					
			
		}
	}
	
}
int main(){
	
	int a,b,c;
	while(cin>>n,n!=0){
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(i!=j)
				d[i][j]=999999;
			else
				d[i][j]=0;
		}
	}
	
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		d[a][b]=c;
		d[b][a]=c;
	}
	
	warshall_floyd();
	
	int it=0;
	int min=999999;
	rep(i,10){
		int sum=0;
		bool f=false;
	rep(j,10){
		if(i!=j&&d[i][j]!=999999){
			f=true;
		sum+=d[i][j];
		}
		
	}
		
		if(f&&sum<min){
			it=i;
			min=sum;
		}
	}
	
	cout<<it<<" "<<min<<endl;
	}
}