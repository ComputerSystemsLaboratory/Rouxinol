#include<iostream>
#include<vector>

using namespace std;

vector<int> ans;
int n,m,p;
int main(){
	while(1){
		cin >> n >> m >> p;
		if(n == 0 && m == 0 && p == 0) break;
		int prize = 0;
		int x[100];
		int sum = 0;
		for(int i = 0;i < n; i++){
			cin >> x[i];
			sum += x[i];
		}
		if(x[m - 1] == 0){
			ans.push_back(0);
		}else{
			ans.push_back(sum *(100 - p)/x[m - 1]);
		}
	}
	for(int i = 0;i < ans.size();i++){
		cout << ans[i] << endl;
	}
}