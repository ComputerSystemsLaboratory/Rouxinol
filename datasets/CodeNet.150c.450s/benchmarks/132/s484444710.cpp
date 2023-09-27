#include<iostream>
#include<vector>

using namespace std;

int n,p;
vector<int> ans;
int main(){
	while(1){
		cin >> n >> p;
		if(n + p == 0) break;
		int sp = p;
		int np[50]={0};
		int win = -1;
		while(1){
			for(int i = 0;i < n;i++){
				if(p>0){
					p--;
					np[i]++;
					if(np[i] == sp) win = i;
				}else{
					p+=np[i];
					np[i] = 0;
				}
				if(win >= 0) break;
			}
			if(win >= 0) break;
		}
		ans.push_back(win);
	}
	for(int i = 0;i < ans.size();i++){
		cout << ans[i] << endl;
	}
}