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
	int a[4],d[4];
	while(true){
		int h=0,b=0;
		cin>>a[0]>>a[1]>>a[2]>>a[3]>>d[0]>>d[1]>>d[2]>>d[3];;
		if (cin.eof())break;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i==j&&a[i]==d[j]) h++;
				if(i!=j&&a[i]==d[j]) b++;
			}
		}
		cout<<h<<" "<<b<<endl;
	}
}