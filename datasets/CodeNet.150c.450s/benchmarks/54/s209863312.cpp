#include <bits/stdc++.h>

using namespace std;

int main(){
	string word,lit;
	cin >> word;
	for(string::iterator it=word.begin();it!=word.end();++it){
		if(*it>='A' && *it<='Z'){
			*it+='a'-'A';
		}
	}
	int ans=0;
	while(cin >> lit,lit!="END_OF_TEXT"){
		for(string::iterator it=lit.begin();it!=lit.end();++it){
			if(*it>='A' && *it<='Z'){
				*it+='a'-'A';
			}
		}
		if(lit==word)ans++;
	}
	cout << ans << endl;
	return 0;
}