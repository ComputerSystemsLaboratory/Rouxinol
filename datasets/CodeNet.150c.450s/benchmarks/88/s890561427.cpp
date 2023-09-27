#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
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
#define ALL(s) begin(s),end(s)
#define VIEW(dat) for(auto v : dat){cout<<v<<endl;}
#define clr(a) memset((a),0,sizeof(a))
#define nclr(a) memset((a),-1,sizeof(a))
#define pb push_back
#define INRANGE(x,s,e) ((s)<=(x) && (x)<(e))
#define MP(a,b) make_pair((a),(b))


const int INF=1<<24;

using namespace std;

string valOf(int n){ stringstream ss;ss<<n;return ss.str();}
int    valOf(string s){return atoi(s.c_str());}
int    valOf(char s){return (unsigned int)(s - '0');}

int gt(int h,int w){return h*h+w*w;}

int main(){
	
	//ifstream cin("in.txt");
	
	int h,w, t;
	while(cin>>h>>w,h||w){
		int r=INF, H=0, W=0;
		t=gt(h,w);
		for(int i=150;i>0;--i){
			for(int j=150;j>0;--j){
				if(t==gt(i,j)&&i>h&&i<j){
					r=gt(i,j);
					H=i;W=j;
				}else if(t<gt(i,j)&&i<j){
					if(r==gt(i,j)){
						H=min(H,i);W=j;
					}else if(r>gt(i,j)){
						r=gt(i,j);
						H=i;W=j;
					}
				}
			}
		}
		cout<<H<<" "<<W<<endl;
	}
}