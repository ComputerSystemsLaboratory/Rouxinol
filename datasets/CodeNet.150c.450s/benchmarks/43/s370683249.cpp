#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define VI vector<int>

#define rep(i,a) for(int i=0;i<(a);i++)
#define all(i) i.begin(),i.end()
#define INF 1000000000


using namespace std;


/**/
VI y;
pair<int,int> x[31];


int main(){
	while(1){
		int n;
		int a,b;
		int suma=0,sumb=0;
		cin>>n;
		if(n==0)break;
		rep(i,n){
			cin>>a>>b;
			if(a>b){
				suma+=a+b;
			}else if(a<b){
				sumb+=a+b;
			}else if(a==b){
				suma+=a;
				sumb+=b;
			}
		}
		cout<<suma<<" "<<sumb<<endl;
	}

	return 0;
}