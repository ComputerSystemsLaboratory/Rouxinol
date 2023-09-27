#include <bits/stdc++.h>

using namespace std;
#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

int main(){
	int n;
	while(cin>>n){
		set<string> se;
		rep(i,n){
			string s;
			cin>> s;
			se.insert(s);
		}
		bool open = false;
		int m; cin >> m;
		rep(i,m){
			string s; cin >> s;
			if(se.count(s)==1){
				if(open) cout << "Closed by " << s << endl;
				else cout << "Opened by "<< s << endl;
				open^=1;
			}else{
				cout << "Unknown " << s << endl;
			}
		}
			
	}
}