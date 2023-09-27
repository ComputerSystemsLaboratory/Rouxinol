/*** ???????????¨???????????? ***/

#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)

int main(){
	int m;
	
	cin >> m;
	REP(i, 0, m){
		string str;
		cin >> str;
		
		set<string> s;
		REP(j, 1, str.size()){
			string str1, str2, rev_str1, rev_str2;
			str1=str.substr(0, j);
			str2=str.substr(j);
			
			for(int k=str1.size()-1; k>=0; k--) rev_str1 += str1[k];
			for(int k=str2.size()-1; k>=0; k--) rev_str2 += str2[k];
			
			s.insert(str1+str2);
			s.insert(str1+rev_str2);
			s.insert(rev_str1+str2);
			s.insert(rev_str1+rev_str2);
			
			s.insert(str2+str1);
			s.insert(str2+rev_str1);
			s.insert(rev_str2+str1);
			s.insert(rev_str2+rev_str1);
		}
		
		cout << s.size() << endl;
	}
	
	return 0;
}