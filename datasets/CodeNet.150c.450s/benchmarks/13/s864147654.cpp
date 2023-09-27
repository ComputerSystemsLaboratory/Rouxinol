#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char s[205], p[105];
	char a[10000];
	cin >> s;
	cin >> p;
	strcat(a, s);
	strcat(a, s);
	if (strstr(a, p) != NULL){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}