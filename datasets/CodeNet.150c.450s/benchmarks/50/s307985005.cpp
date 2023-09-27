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

int n;

int main(){
	while(1){
		cin>>n;
		if(!n) break;
		int ans=0;
		n=1000-n;
		ans+=n/500;
		n%=500;
		ans+=n/100;
		n%=100;
		ans+=n/50;
		n%=50;
		ans+=n/10;
		n%=10;
		ans+=n/5;
		n%=5;
		ans+=n;
		cout<<ans<<endl;
	}
}