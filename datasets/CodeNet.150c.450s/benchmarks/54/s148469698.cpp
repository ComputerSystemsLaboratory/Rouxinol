#include<bits/stdc++.h>
using namespace std;
int main(void){
	int cnt=0;
	int i,j;
	string w;
	cin>>w;
	while(1){
		string s;
		cin>>s;
		if(s=="END_OF_TEXT")	break;
		for(i=0;i<s.size();i++){
			if('A'<=s[i]&&s[i]<='Z'){
				s[i]=s[i]+('a'-'A');
			}
		}
		if(w==s) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
