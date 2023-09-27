#include <iostream>
#include <cstring>
#include <string> 
#include <vector>
using namespace std;


bool vis[15];
int a[15];

bool ok = false;


void dfs(int cnt, int last){
	if(ok){
		return;
	}
	if(cnt > 9)
		return;
	if(cnt <= 9){
		vector<int> ver;
		for (int i = 0; i < 10; i++){
			if(!vis[i]){
				ver.push_back(a[i]);
			}
		}
		bool flag = true;
		for (int i = 1; i < ver.size(); i++){
			if(ver[i] < ver[i - 1]){
				flag = false;
			}
		}
		if(flag){
			ok = true;
		}
		//return;
	}
	
	for (int i = cnt; i < 10; i++){
		if(a[i] > last){
			vis[i] = true;
			dfs(i + 1, a[i]);
			vis[i] = false;
		}
	}
	return;
}
 


int main(){
	int n;
	cin >> n;
	while(n--){
		ok = false;
		memset(a, 0, sizeof(a));
		memset(vis, false, sizeof(vis));
		for (int i = 0; i < 10; i++){
			cin >> a[i];
		}
		
		dfs(0, 0);
		if(ok){
			cout << "YES" << endl;
		}else cout << "NO" << endl; 
		
		
		
	}
	return 0;
}
