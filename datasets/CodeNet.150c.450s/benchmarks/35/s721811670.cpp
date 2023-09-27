#include<iostream>
#include<vector>
#define INF 1500000000

using namespace std;


int main(){
	int n;
	while(cin>>n && n){
		vector<int >data;
		data.push_back(0);
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			data.push_back(x+data.back());
		}
		int ans=-1*INF;
		for(int i=0;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,data[j]-data[i]);
			}
		}
		cout<<ans<<endl;
	}
}