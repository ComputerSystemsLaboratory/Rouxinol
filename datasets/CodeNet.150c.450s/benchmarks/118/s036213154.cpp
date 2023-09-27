#include<iostream>
#include<vector>

using namespace std;

int n;
vector<int> ans;

int main(){
	cin >> n;
	for(int i = 0;i < n; i++){
		int y,m,d;
		int count=0;
		cin >> y >> m >> d;
		
		if(y % 3 == 0){
			count += 20 - d + 1;
			count += 20*(10 - m);
 		}else{
 			if(m % 2 == 1){
 				count += 20 - d + 1;
 			}else{
 				count += 19 - d + 1;
 			}
 			for(int i = m+1; i <= 10;i++){
 				if(i % 2 == 1){
 					count += 20;
 				}else{
 					count += 19;
 				}
 			}
 		}
 		for(int i = y + 1;i < 1000;i++){
 			if(i % 3 == 0){
 				count += 200;
 			}else{
 				count += 195;
 			}
 		}
		ans.push_back(count);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
}