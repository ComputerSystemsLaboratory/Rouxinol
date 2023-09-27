#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<functional>
using namespace std;

typedef pair<int,int> P;



int main(){
	int n,m;
	while(cin>>n>>m && n){
		vector<P> data;
		int ans=0;
		for(int i=0;i<n;i++){
			int d,p;
			cin>>d>>p;
			data.push_back(P(p,d));
			ans+=d*p;
		}
		sort(data.begin(),data.end());
		for(int i=data.size()-1;i>=0;i--){
			if(m>=data[i].second){
				m-=data[i].second;
				ans-=data[i].first*data[i].second;
			}
			else {
				ans-=data[i].first*m;
				break;
			}
		}
		cout<<ans<<endl;
	}
}