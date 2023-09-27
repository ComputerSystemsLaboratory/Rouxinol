#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int main(){
	char s[201],p[101],sl,pl,i,j,flag,ch;
	
	flag=0;
	
	cin >> s;
	cin >> p;
	
	sl=strlen(s);
	pl=strlen(p);
	
	for(i=0;i<sl;i++){
		s[sl+i]=s[i];
	}
	s[sl+sl]='\0';
	
	for(i=0;i<sl;i++){
		ch=0;
		for(j=0;j<pl;j++){
			if ( s[i+j]==p[j] ) {
				ch++;
			}
		}
		if ( ch == pl ) {
			flag=1;
		}
	}
	
	if (flag==1) {
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
	
   return 0;
}