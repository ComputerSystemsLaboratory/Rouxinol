#include<stdio.h>

bool exist[244140625];

int getnum(char *s){
    int i = 0;
    while(s[i] != '\0')
        i++;

    i--;
    int j = 0,k = 1;
    while(i >= 0){
        if(s[i] == 'A')
            j += k;
        else if(s[i] == 'C')
            j += k * 2;
        else if(s[i] == 'G')
            j += k * 3;
        else if(s[i] == 'T')
            j += k * 4;
        i--;k *= 5;
    }
    return j;
}

int main(void){
    int n;
    scanf("%d",&n);

    char op[10],s[20];

    for(int i = 0;i < n;i++){
        scanf("%s%s",op,s);
        if(op[0] == 'i'){
            exist[getnum(s)] = true;
        }else
            if(exist[getnum(s)])
                printf("yes\n");
            else
                printf("no\n");
    }
    return 0;
}