#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{

	char t[1001],w[11];
	char c[12]={'E','N','D','_','O','F','_','T','E','X','T'};
	int i,tl,wl,ch,count,tc,wc;
	
	count=0;
	
	cin >> w;
	wl=strlen(w);

	
	while(1){
		cin >> t;
		tl=strlen(t);
		ch=0;
		for(i=0;i<tl;i++){
			if(tl==11 && t[i]==c[i]) ch++;
		}
		if(ch==11) break;
		
		ch=0;
		for(i=0;i<wl;i++){
			tc=0;
			wc=0;
			tc=t[i]-'A';
			tc=tc%32;
			wc=w[i]-'A';
			wc=wc%32;
			if(tc==wc) ch++;
		}
		if(ch == wl && tl==wl) count++;
	}
	
	cout << count << endl;
	
	return 0;
}