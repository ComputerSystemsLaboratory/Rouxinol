#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char p[202],s[101],ch[101];

	scanf("%s %s",p,s);
	strcpy(ch, p);
        strcat(p, ch);
	if (strstr(p, s)) printf("Yes\n");
        else printf("No\n");
	return 0;
}