#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	string s, str1, str2;
	int maxn = 0, maxl = 0;
	map<string, int> mp;
	while(cin >> s){
		
		
		//if(s == "0")break;
		
		
		mp[s]++;
		if(mp[s] > maxn){maxn = mp[s];str1 = s;}
		int si1 = s.size();int si2 = str2.size();
		if(si1 > si2){str2 = s;}
		//cout << s << " ";
	}
	
	//cout << mp["have"];
	cout << str1 << " " << str2 << endl;
	return 0; 
}