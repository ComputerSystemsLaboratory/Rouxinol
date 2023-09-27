#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,num[110]={},x,ans1=0,ans2=0;
	vector<int> ans;
	while(cin>>n)	num[n]++;
	for(int i=1;i<=100;i++){
		if(num[i]>ans2){
			ans.clear();
			ans.push_back(i);
			ans2 = num[i];
		}
		else if(num[i]==ans2)	ans.push_back(i);
	}
	for(int i=0;i<ans.size();i++)	cout << ans[i] << endl;
	return 0;
}
