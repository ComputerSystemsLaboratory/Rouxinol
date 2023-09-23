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

int main(){
	int n,y=999,m=10,d=20;
	cin>>n;
	int day[1002][11][21];
	day[1000][1][1]=0;
	int cnt=1;
	while(1){
		if(y==0 || m==0 || d==0)break;
		day[y][m][d]=cnt;
		cnt++;
		d--;
		if(y%3!=0){
			if(d==0){
				if(m==1){
					m=10;
					y--;
					if(y%3==0)d=20;
					else d=19;
				}else{
					m--;
					if(m%2==0)d=19;
					else d=20;
				}
			}
		}else{
			if(d==0){
				if(m==1){
					m=10;
					y--;
					d=19;
				}else{
					m--;
					d=20;
				}
			}
		}
	}
	rep(i,n){
		cin>>y>>m>>d;
		cout<<day[y][m][d]<<endl;
	}
	return 0;
}