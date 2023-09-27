#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define rep(i,n) for(int i=0;i<(n);i++)
#define init(a,i) for(int k=0;k<(i);k++)(a)[k]=0
#define in(a,i) for(int k=0;k<(i);k++)cin>>(a)[k]
#define all(a)  (a).begin(),(a).end()
#define el(a) (a).end()-(a).begin()
#define mod 1000000007
#define inf 2147483647
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> ver[n+1];//隣接リスト
	int visit[n+1];
	rep(i,n+1)visit[i]=0;
	visit[1]=1;
	int front[n+1];
	init(front,n+1);
	int a,b;
	rep(i,m){
		cin>>a>>b;
		ver[a].push_back(b);
		ver[b].push_back(a);
	}
	int visit_num=1,obj;
	queue<int> q;
	q.push(1);
	while(q.size()){
		obj=q.front();
		q.pop();
		for(int& i:ver[obj]){
			if(!visit[i]){
				q.push(i);
				front[i]=obj;
				visit[i]=1;
				visit_num++;
			}
		}
	}
	if(visit_num!=n){
		cout<<"No";
		return 0;
	}
	cout <<"Yes"<<"\n";
	rep(i,n-1)cout<<front[i+2]<<"\n";
	return 0;
}