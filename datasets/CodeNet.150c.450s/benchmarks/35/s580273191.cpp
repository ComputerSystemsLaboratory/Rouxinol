#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int sum=0,a[5001],ans=-999999999;
		vector<int>anss(0);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++){
			sum=0;
			for(int j=i;j<n;j++){
				sum+=a[j];
				ans=max(sum,ans);
				//anss.push_back(sum);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}