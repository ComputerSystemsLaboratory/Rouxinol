#include<stdio.h>


int main(){
	int N;

char D[10][7]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

scanf("%d",&N);
for(int iii=0;iii<N;iii++){char x[1025]={};
scanf("%s",x);

int d=0;char pp;int y=0;
for(int i=0;i<1024;i++)
{if(x[i]!='0'&&x[i-1]==x[i]){d++;if(D[y][d]==NULL){d=0;}}
else if(x[i]!='0'&&x[i-1]!=x[i]){d=0;y=x[i]-'0';}
else if(x[i]=='0'&&y!=0){printf("%c",D[y][d]);y=0;d=0;}

}
printf("\n");
}
return 0;
}