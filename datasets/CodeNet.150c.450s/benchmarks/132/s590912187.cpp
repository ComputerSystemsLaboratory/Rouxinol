#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n,wan;
	while(cin>>n>>wan,n||wan){
		vector<int>have(n);
		int i=0;
		int co=wan;
		while(1){
			if(wan){
				have[i]++;
				wan--;
				if(have[i]==co)break;
			}else{
				wan=have[i];
				have[i]=0;
			}
			i=(i+1)%n;
		}
		cout<<i<<endl;
	}
}