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
const ll INF=1ll<<50;
const double pi=acos(-1);
const double eps=1e-8;
const vi emp;

int h,w;
vvb a;

int main(){
	while(1){
		cin>>h>>w;
		if(!h&&!w) break;
		a=vvb(h,vb(w));
		for(int i=0;i<h;i++) for(int j=0;j<w;j++){
			int t;
			cin>>t;
			if(t) a[i][j]=1;
		}
		int M=0;
		for(int i=0;i<(1<<h);i++){
			vi b(w);
			for(int j=0;j<h;j++){
				for(int k=0;k<w;k++){
					if(a[j][k]^(i>>j&1)) b[k]++;
				}
			}
			int tmp=0;
			for(int i=0;i<w;i++) tmp+=max(b[i],h-b[i]);
			M=max(M,tmp);
		}
		cout<<M<<endl;
	}
}