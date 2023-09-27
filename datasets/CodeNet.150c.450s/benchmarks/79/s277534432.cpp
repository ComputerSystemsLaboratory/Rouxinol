#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n, r, p, c;
	while(cin >> n >> r, n|r){
		vector<int> res;
		for(int i = n;i >= 1;i--){
			res.push_back(i);
		}
		for(int i = 0;i < r;i++){
			cin >> p >> c;
			vector<int> tmp;
			for(int i = p-1;i < p + c-1;i++){
				tmp.push_back(res[i]);
			}
			for(int i = 0;i < n;i++){
				if(p-1 <= i && i < p + c - 1)continue;
				tmp.push_back(res[i]);
			}
			res = tmp;
		}
		cout << res[0] << endl;
	}
}