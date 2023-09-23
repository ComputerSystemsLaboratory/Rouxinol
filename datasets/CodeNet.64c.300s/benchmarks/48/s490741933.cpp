#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
bool sosu[1000010]={1,1,0};
int main(){
	for(int i=4;i<1000010;i+=2)sosu[i]=true;
	for(int i=3;i<1000010;i+=2)
		for(int j=i*3;j<1000010;j+=2*i)sosu[j]=true;
	
	int n;
	while(cin>>n){
		int co=0;
		loop(i,2,n+1)if(!sosu[i])co++;
		cout<<co<<endl;
	}
}