#include <bits/stdc++.h>
using namespace std;

string rev(string str){
	reverse(str.begin(),str.end());
	return str;
}

int getPattern(string str){
	set<string> s;
	for(int i=0;i<str.size();i++){
		string sub1 = str.substr(0,i);
		string sub2 = str.substr(i,str.size());
		s.insert(rev(sub1)+sub2);
		s.insert(sub1+rev(sub2));
		s.insert(rev(sub2)+sub1);
		s.insert(sub2+rev(sub1));
		s.insert(rev(sub2)+rev(sub1));
		s.insert(rev(sub1)+rev(sub2));		
		s.insert(sub2+sub1);
		// s.insert(sub1+sub2);		
	}
	return s.size();
}

int main(){

	int n;
	cin >>n;
	while(n--){
		string str;
		cin >> str;
		cout<<getPattern(str)<<endl;
	}
	return 0;
}