#include<iostream>
#include<vector>

using namespace std;
vector<int> ans;

int main(){
	while(1){
		int n,a,b,c,x;
		cin >> n >> a >> b >> c >> x;
		if(n + a + b + c + x == 0) break;
		int y[100];
		int count = -1;
		int reel = 0;
		for(int i = 0;i < n;i++){
			cin >> y[i];
		}
		
		for(int i = 0;i <= 10000;i++){
			if(x == y[reel]) reel++;
			if(reel == n){
				count = i;
				break;
			}
			x = (a*x + b) % c;
		}
		ans.push_back(count);
	}	
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}