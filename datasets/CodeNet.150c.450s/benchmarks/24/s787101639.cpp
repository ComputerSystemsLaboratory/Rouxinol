#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	while(true){
		long n,m;
		cin>>n>>m;
		if(n==0&&m==0)break;
		long sum=0;
		vector<pair<long,long>> d(n);
		for(int i=0;i<n;i++){
			cin>>d[i].second>>d[i].first;
			sum+=d[i].first*d[i].second;;
		}
		sort(d.begin(),d.end());
		reverse(d.begin(),d.end());
		for(int i=0;i<n;i++){
			sum-=min(m,d[i].second)*d[i].first;
			m-=min(m,d[i].second);
		}
		cout<<sum<<endl;
	}
	return 0;
}
