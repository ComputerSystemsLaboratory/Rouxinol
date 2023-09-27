#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> ans;

int main(){
	while(1){
		int e;
		cin >> e;
		if(e == 0) break;
		int m = 1e9;
		for(int i = 0;i < e;i++){
			if(i*i*i > e) break;
			int iii = i*i*i;
			for(int j = 0;j <= e - iii;j++){
				if(j*j > e - iii) break;
				int jj = j*j;
				int k = e - jj - iii;
				m = min(m,i+j+k);
			}
		}
		ans.push_back(m);
	}
	for(int i = 0;i < ans.size();i++)cout << ans[i] << endl;
	
	return 0;
}