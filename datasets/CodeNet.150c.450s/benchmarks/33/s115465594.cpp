#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<utility>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pi acos(-1)
#define all(v) v.begin(),v.end()
using namespace std;

const double eps = 1e-8;
const double INF = 1e12;

int calc(double n,double tax){
	return (int)(n*(100.0+tax)/100.0);
}

int main(){
	double x,y;
	int s;
	while(1){
		cin>>x>>y>>s;
		if(x==0 && y==0 && s==0)break;
		vector<int> intax;
		for(int i=1;i<=s;i++){
			for(int j=1;j<=s;j++){
				double a=i,b=j;
				int sum=calc(a,x)+calc(b,x);
				if(sum==s){
					intax.push_back(calc(a,y)+calc(b,y));
				}
			}
		}
		sort(intax.begin(),intax.end());
		cout<<intax[intax.size()-1]<<endl;
	}
	return 0;
}