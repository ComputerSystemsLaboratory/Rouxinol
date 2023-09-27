#include<stdio.h>
#include<ctype.h>

int main(void)
{
char ddcnt[27]="abcdefghijklmnopqrstuvwxyz";
char ch;
int dcnt[27]={0};


while ( scanf("%c", &ch) != EOF ){
	ch=tolower(ch);
	int num=ch-'a';
    dcnt[num]++;
	// ここで ch がアルファベットなら、数える
}
for(int i=0;i<26;i++)
printf("%c : %d\n",ddcnt[i],dcnt[i]);

return 0;
}