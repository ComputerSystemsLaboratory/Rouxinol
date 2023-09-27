#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	vector<int> list(26,0);
	while(cin >> c){
		if(c>='A' && c<='Z'){
			c+='a'-'A';
		}
		if(c>='a' && c<='z'){
			int num=c-'a';
			list[num]++;
		}
	}
	for(int i=0;i<26;i++){
		char t=i+'a';
		cout << t << " : " << list[i] << endl;
	}

	return 0;
}