#include <bits/stdc++.h>
using namespace std;
int main(){
	long long w,n;
	string s;
	cin >> w >> n;
	long long ans[w];
	for(int i=0;i<w;i++){
		ans[i]=i+1;
	}
	for(int i=0;i<n;i++){
		cin >> s;
		for(int j=0;j<s.size();j++){
			if(s[j]==','){
				string ss=s.substr(0,j),tt=s.substr(j+1,s.size()-j-1);
				swap(ans[atoi(ss.c_str())-1],ans[atoi(tt.c_str())-1]);
			}
		}
	}
	for(int i=0;i<w;i++){
		cout << ans[i] << endl;
	}
	return 0;
}

