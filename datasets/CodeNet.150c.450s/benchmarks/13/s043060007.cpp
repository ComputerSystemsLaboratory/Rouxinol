#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void StrCat(char *p,int num) {

	for (int i = 0; i < num; i++) {
	*(p+num) = *p;
	++p;
	}
	
}
int main()
{
	char s[200] = {};
	char p[100];
	int count[100] = { 0 };
	cin >> s >> p;
	StrCat(s,strlen(s));
	if(strstr(s, p)!=NULL) cout<<"Yes"<<endl;
	else cout << "No" << endl;
    return 0;
}