#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <assert.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  FOR(i,0,n)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define ALL(s) (s).begin(),(s).end()
#define ITE(c) typeof((c).begin())

#define clr(a) memset((a),0,sizeof(a))
#define nclr(a) memset((a),-1,sizeof(a))
#define pb push_back
#define INRANGE(x,s,e) ((s)<=(x) && (x)<(e))
#define MP(a,b) make_pair((a),(b))

#define INF 1<<24
#define MAX_V 999

using namespace std;

int dat[10][10];

int main(){
	int a, b, c, num;
	int n;
	while(cin>>n,n){
		num=0;
		rep(i,10){
			rep(j,10){
				if(i==j){
					dat[i][j]=0;
				}else{
					dat[i][j]=INF;
				}
			}
		}
		rep(i,n){
			cin>>a>>b>>c;
			dat[a][b]=c;dat[b][a]=c;
			num=max(num,max(a,b));
		}
		num++;
		rep(i,num){
			rep(j,num){
				rep(k,num){
					dat[j][k]=min(dat[j][k],dat[j][i]+dat[i][k]);
				}
			}
		}
		
		
		int sum, mC=INF,id;
		rep(i,num){
			sum=0;
			rep(j,num){
				sum+=dat[i][j];
			}
			if(sum<mC){
				mC=sum;id=i;
			}
		}
		cout<<id<<" "<<mC<<endl;
	}
	return 0;
}