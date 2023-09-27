//
//  main.c
//  EngSent
//
//  Created by x16017xx on 2016/11/10.
//  Copyright ?? 2016??´ AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1000][33]={};
    int strId[1000]={};
    char strTmp[33]={};
    int i, j, l = 0;
    int mt=0;
    int cm=0;
    int mm=0;
    char ch;
    // ???????????\???
    for(i=0;i<1000;i++){
        scanf("%c", &ch);
        if(ch==' '||ch=='\n'){
            strTmp[l]='\0';
            for(j=0;strcmp(str[j],"\0")!=0;j++){
                if(0==strcmp(str[j], strTmp)){
                    l=0;
                    break;
                }
            }
            strcpy(str[j], strTmp);
            strId[j]++;
            l=0;
            if(ch=='\n'){
                break;
            }
        }else{
            strTmp[l]=ch;
            l++;
        }
    }
    
    // ????????°????????????????????????
    for(i=0;strcmp(str[i],"\0")!=0;i++){
        if(mt<strId[i]){
            mt=strId[i];
        }
    }
    for(i=0;strcmp(str[i],"\0")!=0;i++){
        if(mt==strId[i]){
            printf("%s ",str[i]);
        }
    }
    // ????????°????????????????????????
    for(i=0;strcmp(str[i],"\0")!=0;i++){
        cm=(int)strlen(str[i]);
        if(mm<cm){
            mm=cm;
        }
    }
    for(i=0;strcmp(str[i],"\0")!=0;i++){
        if(mm==strlen(str[i])){
            printf("%s\n",str[i]);
        }
    }
    return 0;
}