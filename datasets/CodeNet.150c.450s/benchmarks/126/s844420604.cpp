#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int a,b,n,x,y;
	int dirx[2]={1,0};
	int diry[2]={0,1};
	vector<pair<int,int> > vec;
	while(cin>>a>>b,a||b){
		int ans=0;
		cin>>n;
		vec.clear();
		rep(i,n){
			cin>>x>>y;
			pair<int,int> p;
			p.first=x-1;
			p.second=y-1;
			vec.push_back(p);
		}
		queue<pair<int,int> > que;
		pair<int,int> start(0,0);
		que.push(start);
		while(!que.empty()){
			pair<int,int> now=que.front();
			que.pop();
			if(now.first>=a || now.second>=b)continue;
			bool check=false;
			rep(i,vec.size()){
				if(now==vec[i])check=true;
			}
			if(check)continue;
			if(now.first==a-1 && now.second==b-1)ans++;
			rep(i,2){
				now.first+=dirx[i];
				now.second+=diry[i];
				que.push(now);
				now.first-=dirx[i];
				now.second-=diry[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}