#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<int> ans;
int main(){
	while(1){
		int n;
		cin >> n;
		if(n == 0) break;
		bool fd = true;
		bool lf = true,rf = true;
		int count = 0;
		for(int i = 0;i < n;i++){
			string f;
			cin >> f;
			if(f == "lu" || f == "ld") lf = !lf;
			else rf = !rf;
			if(lf == rf && lf != fd){
				fd = !fd;
				count++;
			}
		}
		ans.push_back(count);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}