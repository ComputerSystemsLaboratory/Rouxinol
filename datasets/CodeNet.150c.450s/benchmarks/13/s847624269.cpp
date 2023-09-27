#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
	char s[100], p[100];
	scanf("%s",s);
	scanf("%s",p);
	
	int lgp = strlen(p);
	
	for (int i=0;i<strlen(s);i++){
		//if (s[0] == p[0]){
			for (int j=0; j < lgp; j++){
				if (s[j] != p[j]) break;
				if (j == lgp-1){
					cout << "Yes" << endl;
					return 0;
				}	
			}
		//}
		//????????????????????????
		int dmy = s[0];
		for (int k = 0;k < strlen(s) - 1; k++) s[k] = s[k+1];	
		s[strlen(s)-1] = dmy;	
	}
	cout << "No" << endl;
	return 0;
}