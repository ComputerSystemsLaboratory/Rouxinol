#include<cstdio>
#include<cstring>

using namespace std;

int main(){
	char s1[202],t[101],p1[101];
	
	scanf("%s %s",s1,p1);
	
	strcpy(t,s1);
	strcat(s1,t);
	
	if(strstr(s1,p1) == NULL) printf("No\n");
	else printf("Yes\n");
	
	return 0;
	
}