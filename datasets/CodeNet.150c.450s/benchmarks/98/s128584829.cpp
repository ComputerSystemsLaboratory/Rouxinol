#include <bits/stdc++.h>
using namespace std;
int main(){
	bool num[101];
	int n,m,hanako[100],taro[100];
	while(cin>>n>>m,n,m){
		int sum_hanako=0,sum_taro=0;
		for(int i=0;i<n;i++){
			cin>>taro[i];
			sum_taro+=taro[i];
		}
		for(int i=0;i<m;i++){
			cin>>hanako[i];
			sum_hanako+=hanako[i];
		}
		bool f=false;
		vector<int> ans;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(sum_hanako-hanako[j]+taro[i]==sum_taro-taro[i]+hanako[j]){
					f=true;
					ans.push_back(hanako[j]+taro[i]);
				}
			}
			if(f)break;
		}
		if(f){
			sort(ans.begin(),ans.end());
			int h=(ans[0]-(sum_hanako-sum_taro)/2)/2;
			cout<<h<<" "<<ans[0]-h<<endl;
		}else cout<<-1<<endl;		
	}
}