#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	char s[100],p[100];
	int c = 0;
	int d = 0;
	while(1){
		char a;
		scanf("%c",&a);
		if(a=='\n') break;
		s[c] = a;
		c++;
	}
	while(1){
		char a;
		scanf("%c",&a);
		if(a=='\n') break;
		p[d] = a;
		d++;
	}
	if(c<d){ cout << "No" << endl; return 0;}
	else{
		for(int i=0;i<c;i++){
			int b = 0;
			for(int j=0;j<d;j++){
				int t = (j+i)%c;
				if(p[j]==s[t]) b++;
				else break;
			}
			if(b==d){ cout << "Yes" << endl; return 0;}
		}
	}
	cout << "No" << endl;
}