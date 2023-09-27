#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

vector<int> ans;

int main(){
	while(1){
		int n,m;
		cin >> n >> m;
		if(n + m == 0) break;
		map<int,int> root;
		for(int i = 0;i < 11;i++) root[i] = 0;
		for(int i = 0;i < n;i++){
			int d,p;
			cin >> d >> p;
			
			root[p] += d;
		}
		
		for(int i = 10;i >= 0;i--){
			if(root[i] >= m){
				root[i] -= m;
				m = 0;
				break;
			}else{
				int tn = root[i];
				root[i] = 0;
				m -= tn;
			}
		}
		
		int tans=0;
		for(int i = 0;i < 11;i++){
			tans += i * root[i];
		}
		
		ans.push_back(tans);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	
	return 0;
}