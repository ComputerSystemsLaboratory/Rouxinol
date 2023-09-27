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
int main(){
	int n;
	while(cin>>n,n){
		vector<vector<char> >in(5,vector<char>(n));
		rep(i,n)rep(j,5){
			int q;
			cin>>q;
			in[j][n-1-i]=q+'0';
		}
		//rep(i,5)rep(j,n)cout<<in[i][j]<<" ";
		int out=0;
		while(1){
			rep(i,n){
				char tmp=in[2][i];
				if(tmp=='#')continue;
				string s="";
				rep(j,5)s+=in[j][i];
				string tmps="";
				rep(j,3)tmps+=tmp;
				if(s.find(tmps)!=string::npos){
					rep(j,5){
						if(((j==0&&in[1][i]==tmp)||j==1||j==2||j==3||(j==4&&in[3][i]=='!'))&&in[j][i]==tmp)
							in[j][i]='!';
					}
					rep(j,5)if(in[j][i]=='!')out+=tmp-'0';
				}
			}
			bool h=false;
			rep(i,5)for(int j=0;j<n;j++)if(in[4-i][j]=='!'){
				in[4-i].erase(in[4-i].begin()+j);
				in[4-i].pb('#');
				j--;
				h=true;
			}
			if(!h)break;
		}
		cout<<out<<endl;
	}
}