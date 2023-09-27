#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	char s[101],p[101];
	bool f = false;
	cin >> s;
	cin >> p;
	for(int i = 0;i < strlen(s);i++){
		if(strncmp(s,p,strlen(p)) != 0){
			char temp = s[0];
			for(int j = 0;j < strlen(s);j++){
				if(j != strlen(s) - 1) s[j] = s[j + 1];
				else s[j] = temp;
			}
		}else{
				f = true;
				break;
		}
	}	
	if(f) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}