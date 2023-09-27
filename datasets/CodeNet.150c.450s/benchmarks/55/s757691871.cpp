#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		string str;
		cin >> str;
		if(str=="0")break;
		int ans=0;
		for(string::iterator it=str.begin();it!=str.end();++it){
			int t=*it-'0';
			ans+=t;
		}
		cout << ans << endl;
	}
	return 0;
}