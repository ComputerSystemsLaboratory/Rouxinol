#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,su;
	string s;
	char a[200];
	while(1){
		cin >> s;
		if(s[0]=='-') break;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> su;
			for(int j=0;j<su;j++){
				a[j]=s[j];
			}
			for(int j=su;j<s.size();j++){
				s[j-su]=s[j];
			}
			for(int j=0;j<su;j++){
				s[s.size()-su+j]=a[j];
			}
		}
		cout << s << endl;
	}
}		
