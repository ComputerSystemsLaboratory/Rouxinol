#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<stack>
#include<cstdio>
using namespace std;

typedef pair<int,int> P;
typedef pair<int,P> P1;

#define fr first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define rep1(i,x) for(int i=1;i<=x;i++)
#define sor(v) sort(v.begin(),v.end())
#define min_3(a,b,c) min(a,min(b,c))
#define max_3(a,b,c) max(a,max(b,c))
#define mp1(a,b,c) P1(a,P(b,c))
#define mp make_pair

const int INF=1000000000;
const int dre_4[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
const int dre_8[8][2]={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};
const int kaijou[10]={1,1,2,6,24,120,720,5040,40320,362880};

int main(){
	while(1){
		int r,c;
		static int a[12][10010];
		
		cin>>r>>c; if(r==0&&c==0)break;
		rep(i,r)rep(j,c)scanf("%d",&a[i][j]);
		
		int ret=0;
		rep(i,1<<r){
			int sum=0;
			rep(j,c){
				int cnt=0;
				rep(k,r){
					cnt+=(a[k][j]+(i>>k)&1)&1;
				}
				sum+=max(cnt,r-cnt);
			}
			ret=max(ret,sum);
			//cout<<i<<" "<<sum<<endl;
		}
		
		cout<<ret<<endl;
	}
}