#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
	int in;
	while(cin>>in,in){
	int out=0;
	loop(i,1,in){
		int sum=0;
		loop(j,i,in+1){
			sum+=j;
			if(sum==in){out++;break;}
			else if(j>in)break;
		}
	}
	cout<<out<<endl;
	}
}