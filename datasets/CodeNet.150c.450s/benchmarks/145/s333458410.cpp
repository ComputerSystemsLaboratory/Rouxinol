#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string ans = "";
	map <string ,int> mp;
	while(cin >> s){
		if(ans.size() < s.size())
			ans = s;
		mp[s]++;
	}
	int va = 0;
	string asdf;
	for(auto itr = mp.begin() ; itr != mp.end() ; itr++)
		if((*itr).second > va){
			asdf = (*itr).first;
			va = (*itr).second;
		}
	cout << asdf << " " << ans << endl;
}