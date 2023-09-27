#include<bits/stdc++.h>
using namespace std;

int main() {
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		vector<int> s(n),g(n);
		vector<int> m(86400);
		for(int i=0; i<n; i++){
			string a,b;
			cin >> a >> b;
			s.at(i)=stoi(a.substr(0,2))*3600+stoi(a.substr(3,2))*60+stoi(a.substr(6,2));
			g.at(i)=stoi(b.substr(0,2))*3600+stoi(b.substr(3,2))*60+stoi(b.substr(6,2));
			m.at(s.at(i))++;
			m.at(g.at(i))--;
		}
		int ans{}, cnt{};
		for(int i=0; i<86400; i++){
			cnt += m.at(i);
			ans = max (ans, cnt);
		}
		cout << ans << endl;
	}
	
}
