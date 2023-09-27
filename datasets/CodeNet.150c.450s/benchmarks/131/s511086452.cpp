#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

#define REP(i, s, e) for(int i = (int)(s); i < (int)(e); i++)
#define rep(i, n) REP(i,0, n)

#define all(r) (r).begin(), (r).end()
#define rall(r) (r).rbegin(), (r).rend()

int main(){
	string str;
	int n;
	while(cin>>str>>n){
		if(str == "0" && n == 0) break;
		string s;
		rep(i, n - str.size()) s += "0";
		s+=str;
		//cout<<s<<endl;
		map<string, int> mp;
		int cnt = 1;
		while(1){
			if(mp[s] > 0){
				stringstream ss;
				ss<<s;
				int a;
				ss>>a;
				cout<<mp[s]-1<<" "<<a<<" "<<cnt - mp[s]<<endl;
				break;
			}
			mp[s] = cnt;
			string t = s, u = s;
			sort(all(t));
			sort(rall(u));
			int a, b;
			stringstream tt, uu;
			tt<<t; uu<<u;
			tt>>a; uu>>b;
			//cout<<a<<" "<<b<<endl;
			stringstream ss;
			ss<<(b-a);
			ss>>s;
			//cout<<s<<" ";
			string v(n-s.size(), '0');
			s = v + s;
			//cout<<v<<endl;
			cnt++;
		}
	}
}