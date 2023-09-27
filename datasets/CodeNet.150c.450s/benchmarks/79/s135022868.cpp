#include<iostream>
#include<vector>

using namespace std;

int n,r;
vector<int> ans;
int main(){
	while(1){
		vector<int> m;
		cin >> n >> r;
		if(n + r == 0) break;
		for(int i = 1;i <= n;i++){
			m.push_back(i);
		}
		for(int i = 0; i < r;i++){
			int c,p;
			cin >> p >> c;
			vector<int> nm;
			
			for(int j = 0;j < n;j++){
				if(j<n-p-c+1 || n-p+1<=j){
					nm.push_back(m[j]);
				}
			}
			for(int j = n-p-c+1;j < n-p+1;j++){
				nm.push_back(m[j]);
			}
			
			m = nm;
		}
		ans.push_back(m[n-1]);
	}
	for(int i = 0;i < ans.size();i++){
		cout << ans[i] << endl;
	}
}