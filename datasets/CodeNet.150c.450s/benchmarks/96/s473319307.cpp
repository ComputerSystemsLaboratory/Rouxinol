#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
#include <complex>
#include <utility>
#include <numeric>
#define  rep(i,n) for(int i=0;i<(n);i++)
#define  REP(i,a,n) for(int i=a;i<(n);i++)
#define  rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define  VI	vector<int>
#define	 VS vector<string>
#define  all(a) (a).begin(),(a).end()
#define  debug(x) cout<<#x<<": "<<x<<endl
using namespace std;
typedef pair<int,int> P;
typedef long long ll;

const int INF=1000000;
char fi[101][101];
int d[21][21];
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int N,M;
int sx,sy;
int gx,gy;
int w,h;
int ans;

int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
const int MAX_V=100;
const int MAX_N=100;
char o[3]={'+','-','*'};
#define md 1000003

int dp[353][353]={0};
int bow[353][353]={0};


int main(){
	
	string s;
	int n;
	cin>>n;
	while(n>0){
		cin>>s;
		vector<string> p(10);
		p[1]=".,!? ";
		p[2]="abc";
		p[3]="def";
		p[4]="ghi";
		p[5]="jkl";
		p[6]="mno";
		p[7]="pqrs";
		p[8]="tuv";
		p[9]="wxyz";
		bool f=false;
		char c='0';
		int count=0;
		string a="";
		rep(i,s.size()){
			if(s[i]=='0'){
				if(f){
				if(c=='1'){
					count=(count-1)%5;
				}
				else if(c=='7'||c=='9'){
					count=(count-1)%4;
				}
				else{
					count=(count-1)%3;
				}
				a+=p[c-'0'][count];
				f=false;
				count=0;
				c='0';
				}
			}
			else{
				f=true;
				if(c!=s[i]){
					c=s[i];
					count=1;
				}
				else
					count++;
				
			}
			
		}
		cout<<a<<endl;
		n--;
	}
	
}