#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdio>
#include<map>
#include<cmath>
#define pb(in,tmp) in.push_back(tmp)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,b) loop(i,0,b)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;
int main(){
	int n;
	int out=100000;
	cin>>n;
	rep(i,n){
		out*=1.05;
		if(out%1000)out+=1000-out%1000;
	}
	cout<<out<<endl;
}