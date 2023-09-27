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

int a,ans=-1;
map<int,int> m;

int main(){
	while(cin>>a) m[a]++;
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++) ans=max(ans,it->second);
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
		if(ans==it->second) cout<<it->first<<endl;
	}
}