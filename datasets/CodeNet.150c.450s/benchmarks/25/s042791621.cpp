/*8_C*/
#include<stdio.h>
#include<string.h>
int main() {
    int i,a,len;
	char st[1201];
    int num;
    int alp[26]={0};
    while(scanf("%s",st) != EOF) {
        a=0;
        len = strlen(st);
        while(1) {
            num = st[a]-'a';
            if(st[a] >= 97 && st[a] <=122) {
                alp[num]++;
            } else if(st[a] >= 65 && st[a] <=90) {
                alp[num+32]++;
            }
            a++;
            if(a>=len) break;
        }
    }
    for(i=97;i<=122;i++) {
        printf("%c : %d\n",i,alp[i-97]);
    }
	return 0;
}
