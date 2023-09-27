#include <iostream>
#include <cstdio>
int main()
{
    int i;
	int n[26]={0};
	int x;
	int num;
    char str[1200];
	char str2[27];
	char tmp=1;
    for(i=0;i<26;i++){
        str2[i]=97+i;
    }
    i=0;
    while(scanf("%c",&tmp)!=EOF){   
        str[i]=tmp;
        i++;
    }
    num=i-1;
    for(i=0;i<num;i++){
        if('a'<=str[i]&&str[i]<='z'){
            x=str[i]-'a';
            n[x]+=1;
        }else if('A'<=str[i]&&str[i]<='Z'){
            x=str[i]-'A';
            n[x]+=1;
        }
    }
    for(i=0;i<26;i++){
        std::cout<<str2[i]<<" : "<<n[i]<<std::endl;
    }
    return 0;
}