#include<bits/stdc++.h>

using namespace std;

set<string> dic;

int main()
{
	int n;
	string s1,s2;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s1 >> s2;
		if(s1.length() == 6){
			dic.insert(s2);
		}else{
			set<string>::iterator it = dic.find(s2);
			if(it == dic.end()){
				cout << "no" << "\n";
			}else{
				cout << "yes" << "\n";
			}
		}
	}
}