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
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n;
	while(cin>>n,n){
		int in[500][500];
		rep(i,500)rep(j,500)in[i][j]=inf;
		in[250][250]=0;
		rep(k,n-1){
			int a,b;
			cin>>a>>b;
			bool h=false;
			rep(i,500){
				rep(j,500)if(in[i][j]==a){
					if(b==0)in[i][j-1]=k+1;
					if(b==1)in[i+1][j]=k+1;
					if(b==2)in[i][j+1]=k+1;
					if(b==3)in[i-1][j]=k+1;
					h=true;
					break;
				}
				if(h)break;
			}
		}	
		int a,b;
		rep(j,500){
			bool h=false;
			rep(i,500)if(in[i][j]!=inf){a=j;h=true;break;}
			if(h)break;
		}
		for(int j=499;j>=0;j--){
			bool h=false;
			rep(i,500)if(in[i][j]!=inf){b=j;h=true;break;}
			if(h)break;
		}
		cout<<b-a+1<<" ";
		rep(i,500){
			bool h=false;
			rep(j,500)if(in[i][j]!=inf){a=i;h=true;break;}
			if(h)break;
		}
		for(int i=499;i>=0;i--){
			bool h=false;
			rep(j,500)if(in[i][j]!=inf){b=i;h=true;break;}
			if(h)break;
		}
		cout<<b-a+1<<endl;
		
	}
}