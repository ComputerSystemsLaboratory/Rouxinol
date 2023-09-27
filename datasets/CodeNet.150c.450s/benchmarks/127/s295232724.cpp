#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
map<string,int> train;
int main(){
	int n;
	cin>>n;
	while(n--){
		train.clear();
		int ans=0;
		string s;
		cin>>s;
		for(int i=1;i<s.size();i++){
			string l,r;
			for(int j=0;j<i;j++)
				l+=s[j];
			for(int j=i;j<s.size();j++)
				r+=s[j];
			string dl=l,dr=r;
			reverse(dl.begin(),dl.end());
			reverse(dr.begin(),dr.end());
			if(train[l+r]==0){
				train[l+r]++;
				ans++;
			}
			if(train[l+dr]==0){
				train[l+dr]++;
				ans++;
			}
			if(train[dl+r]==0){
				train[dl+r]++;
				ans++;
			}
			if(train[dl+dr]==0){
				train[dl+dr]++;
				ans++;
			}
			if(train[r+l]==0){
				train[r+l]++;
				ans++;
			}
			if(train[r+dl]==0){
				train[r+dl]++;
				ans++;
			}
			if(train[dr+l]==0){
				train[dr+l]++;
				ans++;
			}
			if(train[dr+dl]==0){
				train[dr+dl]++;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}