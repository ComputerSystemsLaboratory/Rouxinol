#include<iostream>
#include<vector>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef pair<int,int> pii;

int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

int main(){
	int n;
	while(cin>>n,n){
		vector<pii> vec;
		vec.push_back(pii(0,0));
		int m,d;
		loop(i,1,n){
			cin>>m>>d;
			pii now=vec[m];
			now.first+=dx[d];
			now.second+=dy[d];
			vec.push_back(now);
		}
		int wmi=1e6,wma=-1*1e6,hmi=1e6,hma=-1*1e6;
		rep(i,vec.size()){
			wma=max(wma,vec[i].first);
			wmi=min(wmi,vec[i].first);
			hmi=min(hmi,vec[i].second);
			hma=max(hma,vec[i].second);
		}
		cout<<wma-wmi+1<<" "<<hma-hmi+1<<endl;
	}
	return 0;
}