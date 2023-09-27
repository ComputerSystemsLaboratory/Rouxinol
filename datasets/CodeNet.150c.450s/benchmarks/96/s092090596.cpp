#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){

	string nums[] = {".,!? ","abc","def","ghi","jkl",
					"mno","pqrs","tuv","wxyz"};

	int N;
	string ts;
	vector<string> v;
	vector<string> ans;

	cin>>N;
	for(int i=0; i<N; i++){
		cin>>ts;
		v.push_back(ts);
	}
	for(int i=0; i<N; i++){
		bool flag = true;
		int k=-1,cnt=0;
		ans.push_back("");
		for(int j=0; j<v[i].size(); j++){
			cnt = 0;
			while(1){
				if(flag){
					flag = false;
					k = (int)(v[i][j] - '0'-1);
					cnt=-1;
				}
				if(cnt == nums[k].size()) cnt = 0;
				if(v[i][j] == '0'){
					if(k!=-1) ans[i] += nums[k][cnt];
					flag = true;
					break;
				}

				cnt++;
				j++;
			}
		}
	}

	for(int i=0; i<N; i++){
		cout<<ans[i]<<endl;
	}

	return 0;
}