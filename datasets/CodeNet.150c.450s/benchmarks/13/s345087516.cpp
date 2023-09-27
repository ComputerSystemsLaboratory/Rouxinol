#include <cstdio>
#include <cstring>
using namespace std;

int main(){

	char s1[101],s2[201],p[101];
	scanf("%s %s",s1,p);
	strcpy(s2,s1);
	strcat(s2,s1);

	if(strstr(s2,p) == NULL)printf("No\n");
	else printf("Yes\n");

	return 0;
}