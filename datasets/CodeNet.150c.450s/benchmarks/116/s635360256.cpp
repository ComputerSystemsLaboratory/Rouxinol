#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <cstdlib>
#include <algorithm>
using namespace std;
/*
int dfs(int w,int h,int noww,int nowh,int n,int b){
	++n;
	if(noww>w || nowh>h) return 0;
	if(noww==w && nowh==h) return 1;
	int ret=0;
	n=0;
	if(n)
	ret+=dfs(w,h,++noww,nowh,n,b);
	ret+=dfs(w,h,noww,++nowh,n,b);
	ret+=dfs(w,h,++noww,nowh,n,b);
	ret+=dfs(w,h,noww,++nowh,n,b);
	return ret;
}

int main()u{
	int w,h;
	cin >> w >> h;
	cout << dfs(w,h,1,1,2,0) << endl;
	return 0;
}
*/

int main(){
	int n,k;
	while(cin >> n >> k&&n!=0&&k!=0){
		int maxi=0,pre=0;
		vector<int> seq(n);
		for(int i=0; i<n; ++i){
			cin >> seq[i];
		}
		for(int i=0; i<k; ++i){
			maxi+=seq[i];
			pre+=seq[i];
		}
		for(int i=1; i<n-k+1; ++i){
			pre=pre-seq[i-1]+seq[i+k-1];
			maxi=max(maxi,pre);
		}
		cout << maxi << endl;
	}
	return 0;
}