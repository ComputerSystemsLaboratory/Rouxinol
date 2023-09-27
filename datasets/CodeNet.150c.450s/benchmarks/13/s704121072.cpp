#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	char s[201], t[101], p[101];

	scanf("%s %s", s, p);
	strcpy(t, s);
	strcat(s, t);

	if (strstr(s, p)== NULL)printf("No\n");
	else printf("Yes\n");

    return 0;
}
