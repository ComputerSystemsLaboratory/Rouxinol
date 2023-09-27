#include <bits/stdc++.h>

using namespace std;

int main(){
	string str,tar;
	cin >> str >> tar;
	bool flag=false;
	for(int i=0;i<str.length();i++){
		if(str[i]==tar[0]){
			flag=true;
			for(int j=0;j<tar.length();j++){
				int pos=(i+j)%str.length();
				if(str[pos]!=tar[j]){
					flag=false;
					break;
				}
			}
			if(flag)break;
		}
	}
	if(flag)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}