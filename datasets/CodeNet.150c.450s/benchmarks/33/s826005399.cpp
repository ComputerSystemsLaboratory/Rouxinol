#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> ans;
int x,y,s;

int main(){
	while(1){
		cin >> x >> y >> s;
		if(x + y + s == 0) break;
		int mx = 0;
		for(int i = 1; i < s;i++){
			for(int j = s-1;j >= 1;j--){
				if((i*(100+x)/100 + j*(100+x)/100) == s){
					int sum = i*(100+y)/100 + j*(100+y)/100;
					mx = max(mx,sum);
					break;
				}
			}
		}
		ans.push_back(mx);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}