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

long long int m,nmin,nmax;
string s;

int main() {
	cout << fixed << setprecision(18);
	cin>>m>>nmin>>nmax;
	while(0!=m){
		
		long long int p[210],res,gap=0;
		for(int i=1;i<=m;i++){
			cin>>p[i];
		}
		sort(p+1,p+m+1);
		for(int i=m-nmax+1;i<=m-nmin+1;i++){
			if(gap<p[i]-p[i-1]){
				gap=p[i]-p[i-1];
				res=m-i+1;
			}
		}
		cout<<res<<endl;
		cin>>m>>nmin>>nmax;
	}
	
} 
