#include <iostream>
#include <vector>
using namespace std;

vector<bool> used(10, false);
int dfs(int prev, int n, int s){
	if(n==0){
		int sum=0;
		for(int i=0; i<10; i++){
			if(used[i]) sum+=i;
		}
		if(sum==s) return 1;
		else return 0;
	}
	
	int ret=0;
	for(int i=prev+1; i<10; i++){
		used[i] = true;
		ret += dfs(i, n-1, s);
		used[i] = false;
	}
	return ret;
}
int main(){
	while(1){
		int n,s;
		cin >> n >> s;
		if(n==0) break;
		cout << dfs(-1,n,s) << endl;
	}
	return 0;
}