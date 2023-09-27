#include <cstdio>

using namespace std;

char conv[256];
int n,m;

int main(){
	char c;
	char s1[2];
	char s2[2];
	while(scanf("%d",&n) && n){
		for(int i=0;i<256;i++){
			conv[i] = i;
		}
		for(int i=0;i<n;i++){
			scanf("%s %s",s1,s2);
			conv[*s1] = *s2;
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%s",s1);
			printf("%c",conv[*s1]);
		}
		printf("\n");
	}
}