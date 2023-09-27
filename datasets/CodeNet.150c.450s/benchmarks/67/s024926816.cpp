#include<iostream>
#include<vector>

using namespace std;

int n;
vector<int> ans;

int main(){
	while(1){
		cin >> n;
		if(n == 0) break;
		int count = 0;
		for(int i = 1;i < n;i++){
			int sum = i;
			for(int j = i+1; sum < n;j++){
				sum += j;
				if(sum == n) count++;
			}
		}
		ans.push_back(count);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
}