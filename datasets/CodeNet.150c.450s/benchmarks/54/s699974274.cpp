#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main(){
	string s, w;
	int cnt=0, i;

	cin>>w;
	int l=w.size();

	for(i=0; i<l; i++){
		if(w[i]>='A' && w[i]<='Z')s[i]+=('a'-'A');
	}

	while(cin>>s){
		if(s=="END_OF_TEXT")break;
		int l=s.size();
		for(int i=0; i<l; i++){
			if(s[i]>='A' && s[i]<='Z')s[i]+=('a'-'A');
		}
		if(s==w){
			cnt+=1;
		}
	}
	cout<<cnt<<endl;


	return 0;
}
