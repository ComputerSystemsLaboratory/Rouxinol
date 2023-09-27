#include<stdio.h>
#include<string.h>
#define NIL (-1)
#define m 1046527
char T[m][14];
int h1(int key) {return key%m;}
int h2(int key) {return key%(m-1);}
 
 
int getChar(char ch){
    if (ch=='A') return 1;
    else if (ch=='C') return 2;
    else if (ch=='G') return 3;
    else if (ch=='T') return 4;
    else return 0;
}
 
long long getKey(char moji[]){
    long long sum=0,p=1,i;
    for(i=0;i<strlen(moji);i++){
        sum+=p*(getChar(moji[i]));
        p*=5;
    }
    return sum;
}
 
 
int search(char moji[]){
    long long key,i,h;
    key=getKey(moji);
    for(i=0;;i++){
        h=(h1(key)+i*h2(key))%m;
        if(strcmp(T[h],moji)==0) return 1;
        else if(strlen(T[h])==0) return 0;
    }
    return 0;
}
 
int insert(char moji[]){
    long long key,i,h;
    key=getKey(moji);
    for(i=0;;i++){
        h=(h1(key)+i*h2(key))%m;
        if(strcmp(T[h],moji)==0) return 1;
        else if(strlen(T[h])==0){
            strcpy(T[h],moji);
            return 0;
        }
    }
    return 0;
}
 
 
int main(void){
    int i,n;
    char order[9],moji[14];
     for ( i = 0; i < m; i++ ) T[i][0] = '\0';
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s%s",order,moji);
        if(order[0]=='i') insert(moji);
        else if(search(moji)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
