#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <queue>
#include <algorithm>
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

int n,m;

int main(){
	while(1){
		cin>>n;
		if(n==0) break;
		vector<pair<char,char> > cha(n);
		for(int i=0;i<n;i++){
			cin>>cha[i].first>>cha[i].second;
		}
		cin>>m;
		for(int i=0;i<m;i++){
			char s;
			bool used=0;
			cin>>s;
			for(int i=0;i<n;i++){
				if(s==cha[i].first){
					cout<<cha[i].second;
					used=1;
					break;
				}
			}
			if(!used) cout<<s;
		}
		cout<<endl;
	}
}