#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i;
	int a[26]={0};
	string n;
	while(getline(cin,n)){
		for(i=0;i<n.size();i++){
			if('A'<=n[i]&&n[i]<='Z'){
				n[i]=n[i]+('a'-'A');
			}
		}
		for(i=0;i<n.size();i++){
			if('a'<=n[i]&&n[i]<='z'){
				a[n[i]-'a']++;
			}
		}
	}
	for(i=0;i<26;i++){
		printf("%c : %d\n",i+'a',a[i]);
	}
	return 0;
}
