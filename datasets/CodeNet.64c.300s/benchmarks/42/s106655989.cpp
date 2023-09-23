#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int nowx,nowy;
bool houseki[25][25];
int main(){
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		REP(i,25) REP(j,25) houseki[i][j] = false;
		REP(i,n){
			int tx,ty;
			cin >> tx >> ty;
			houseki[tx][ty] = true;
		}
		int m;
		cin >> m;
		int get = 0;
		nowx = 10; nowy = 10;
		if(houseki[nowx][nowy]) {
			get++;
			houseki[nowx][nowy] = false;
		}
		REP(i,m){
			char vec; int dis;
			cin >> vec >> dis;
			int oldx = nowx; int oldy = nowy;
			if(vec=='N') nowy+=dis;
			if(vec=='S') nowy-=dis;
			if(vec=='W') nowx-=dis;
			if(vec=='E') nowx+=dis;
			if(nowy == oldy){
				if(nowx<oldx){
					FOR(j,nowx,oldx+1){
						if(houseki[j][nowy]) {
							houseki[j][nowy] = false;
							get++;
						}
					}
				}else{

					FOR(j,oldx,nowx+1){
						if(houseki[j][nowy]) {
							get++;
							houseki[j][nowy] = false;
						}
					}
				}
			}else{
				if(nowy<oldy){
					FOR(j,nowy,oldy+1){
						if(houseki[nowx][j]) {
							get++;
							houseki[nowx][j] = false;
						}
					}
				}else{
					FOR(j,oldy,nowy+1){
						if(houseki[nowx][j]) {
							get++;
							houseki[nowx][j] = false;
						}
					}
				}
			}
			//cout << nowx << " " << nowy<<endl;
		}
		if(get==n) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}