#include <iostream>
#include <fstream>
#include <typeinfo>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<25;
const double pi=acos(-1);
const double eps=1e-10;
const vi emp;

int n,k;
vi a;

int main(){
	while(1){
		cin>>n>>k;
		if(!n&&!k) break;
		a=vi(n);
		ll sum=0,ans;
		for(auto i=a.begin();i!=a.end();i++){
			cin>>*i;
			if(i<a.begin()+k) sum+=*i;
		}
		ans=sum;
		for(auto i=a.begin()+k;i!=a.end();i++){
			sum+=*i-*(i-k);
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
	}
}