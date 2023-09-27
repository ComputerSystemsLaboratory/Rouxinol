#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define rep(i,a) for(int i=0;i<(a);i++)
#define all(i) i.begin(),i.end()

using namespace std;

int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		vector<int> p;
		rep(i,n){
			int tmp;
			cin>>tmp;
			p.push_back(tmp);
		}
		sort(all(p));
		ll sum=0;
		for(int i=1;i<n-1;i++){
			sum+=p[i];
		}
		cout<<sum/(n-2)<<endl;
	}
	return 0;
}