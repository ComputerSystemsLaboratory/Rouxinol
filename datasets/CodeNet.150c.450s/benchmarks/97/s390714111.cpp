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

int main(){
	int n;
	int posx[200];
	int posy[200];
	while(cin >> n,n){
		posx[0] = 0;
		posy[0] = 0;
		FOR(i,1,n){
			int a,b;
			cin >> a >> b;
			if(b==0){
				posx[i] = posx[a]-1;
				posy[i] = posy[a];
 			}
 			if(b==1){
				posx[i] = posx[a];
				posy[i] = posy[a]-1;
 			}
 			if(b==2){
				posx[i] = posx[a]+1;
				posy[i] = posy[a];
 			}
 			if(b==3){
				posx[i] = posx[a];
				posy[i] = posy[a]+1;
 			}
		}
		sort(posx,posx+n);
		sort(posy,posy+n);
		cout << abs(posx[n-1]-posx[0])+1 <<" " << abs(posy[n-1]-posy[0])+1 << endl;
	}
}