#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<math.h>
#include<queue>
#include<complex>
#include<random>
#include<ctime>
#include<set>
using namespace std;


const long long int mod=1000000007;
const long long int INF=99999999999999999;


long long int n,m;
int main() {
	string s,t;
	cout << fixed << setprecision(18);
	cin>>n>>m;
	while(n!=0){
		long long int d[10005],p[10005];
		pair<long long int,long long int>pa[10005];
		for(int i=0;i<n;i++){
			cin>>pa[i].second>>pa[i].first;
		}
		long long int res=0;
		sort(pa,pa+n,greater<pair<long long int,long long int> >());
		for(int i=0;i<n;i++){
			if(pa[i].second<=m){m-=pa[i].second;}
			else{res+=(pa[i].second-m)*pa[i].first;m=0;}
		}
		cout<<res<<endl;
		cin>>n>>m;
	}
	

} 
