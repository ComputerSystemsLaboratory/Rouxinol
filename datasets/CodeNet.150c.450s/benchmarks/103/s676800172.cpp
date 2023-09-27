#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <algorithm>
#include <cctype>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);

int n,s,ans;

void func(int x,int y,int z){
	if(!x&&!y){
		ans++;
		return;
	}
	if(!x||y<0||z==10) return;
	for(int i=z;i<10;i++) func(x-1,y-i,i+1);
}

int main(){
	while(1){
		cin>>n>>s;
		if(!n&&!s) break;
		ans=0;
		func(n,s,0);
		cout<<ans<<endl;
	}
}