#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string keitai(string s){
	string t="";
	char k1[6]=".,!? ";
		
	for(int i=0; i<s.size(); ++i){
		
		if(s[i]=='0') continue;
		else if(s[i]=='1'){
			int c1=0;
			do{
				++i;	
				++c1;
			}while(s[i]=='1');
			
			if(s[i]=='0') t += k1[(c1-1)%5];				
		}
		else{
			char c=s[i];
			int c2=0;
			do{
				++i;	
				++c2;
			}while(s[i]==c);
			if(s[i]=='0'){
				if('2'<=c && c<='6') t+='a'+((c-'2')*3)+((c2-1)%3);
				else if(c=='7') t+='p'+(c2-1)%4;
				else if(c=='8') t+='t'+(c2-1)%3;
				else if(c=='9') t+='w'+(c2-1)%4;
			}			
		}
	
	}
	
	return t;
}

int main(){
	int n;
	scanf(" %d", &n);
	for(int i=0; i<n; ++i){
		string s;
		cin >> s;	
		cout << keitai(s) << endl;
	}
	return 0;
}