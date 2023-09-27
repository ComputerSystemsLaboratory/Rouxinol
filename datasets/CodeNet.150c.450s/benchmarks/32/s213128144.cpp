#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
	int n,min,max;
	while(cin>>n>>min>>max && n){
		min--; max--;
		vector<int> v(n);
		for(int i=0;i<n;i++)cin>>v[i];
		sort(v.begin(),v.end(),greater<int>());

		int ans,gap=0;
		for(int i=min;i<=max;i++){
			if(gap>=v[i+1]-v[i]){
				gap=v[i+1]-v[i];
				ans=i+1;
			}
		}
		cout<<ans<<endl;
	}
}


