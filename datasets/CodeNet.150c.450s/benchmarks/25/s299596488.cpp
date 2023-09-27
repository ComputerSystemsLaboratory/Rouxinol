#include <bits/stdc++.h>
using namespace std;


int cnt[26];

int main(){
	int num =0;
	string s;

	while(getline(cin,s)){
		if(s=="") break;

	for(int i=0; i < s.length(); i++){
		if(islower(s[i])){
			num = s[i] - 'a';
			if(num>=0)
				cnt[num]++;
		}
		else{
			s[i]=tolower(s[i]);
			num = s[i] - 'a';
			if(num>=0)
				cnt[num]++;
		}
	}
}
	int j=97;
	for(int i=0; i<26; i++){
		printf("%c"" : ""%d\n", j,cnt[i]);
		j++;
	}
	return 0;
}