#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <numeric>
#include <iomanip>
#define fi first
#define se second
#define fcout(n) cout<<fixed<<setprecision((n))
#define cinl(str) getline(cin,(str))
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int INF=10000009;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
int main() {
	int day=0;
	int x,y;
	int md[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	string s[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	while(true){
		cin>>x>>y;
		if(x==0) break;
		for(int i=0;i<x-1;i++){
			day+=md[i];
		}
		day+=y;
		day%=7;
		cout<<s[day]<<endl;
		day=0;		
	}
}