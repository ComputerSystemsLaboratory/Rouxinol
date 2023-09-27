#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
	char s[200], p[100];
	int len;\
	cin >> s;
	cin >> p;
	
	len = strlen(s);
	for(int i = 0; i < len; i++){
		s[len+i] = s[i];
	}

	
	if(strstr(s, p) != NULL){
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
	
	return 0;
}