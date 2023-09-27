#include<iostream>
#include<vector>

using namespace std;

vector<int> ans;

int main(){
	while(1){
		int n;
		cin >> n;
		if(n == 0) break;
		
		int change = 1000 - n;
		int coin[] = {500,100,50,10,5,1};
		
		int tans = 0;
		for(int i = 0;i < 6;i++){
			int maisu = change / coin[i];
			if(maisu != 0){
				tans += maisu;
				change -= coin[i] * maisu;
			}
		}
		ans.push_back(tans);
	}
	
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}