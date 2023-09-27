#include <bits/stdc++.h>
using namespace std;

#define m 1046527
#define L 14

char T[m][L];

int h1(long long key){
    return key%m;
}
int h2(long long key){
    return 1+key%(m-1);
}
int h(long long key, int i){
    return (h1(key)+i*h2(key))%m;
}
int charTonum(char c){
    switch(c){
        case 'A':
            return 1;
        case 'C':
            return 2;
        case 'G':
            return 3;
        case 'T':
            return 4;
        default:
            return 0;
    }
}

long long getKey(char str[]){
    int length = strlen(str);
    long long sum = 0, p = 1;
    for(int i=0;i<length;++i){
        sum += p*charTonum(str[i]);
        p *= 5;
    }
    return sum;
}
void insert(char str[]){
    long long  key, pos, i= 0;
    key = getKey(str);
    while(1){
        pos = h(key,i);
        if(strcmp(T[pos],str)==0) break;
        else if(strlen(T[pos])==0){
            strcpy(T[pos],str);
            break;
        }
        i++;
    }
}

int find(char str[]){
    long long  key, pos, i = 0;
    key = getKey(str);
    while(1){
        pos = h(key,i);
        if(strcmp(T[pos],str)==0) return 0;
        else if(strlen(T[pos])== 0) return 1;
        i++;
    }
}

int main(){
    int n,key,ret;
    /*FILE *fpRead=fopen("In9.txt","r");

    fscanf(fpRead,"%d",&n);*/
    scanf("%d",&n);
    for(int i=0;i<n;++i) T[i][0] = '\0';
    char op[7], str[L];
    for(int i=0;i<n;++i){
        //fscanf(fpRead,"%s %s",op,str);
        scanf("%s %s",op,str);
        if(op[0]=='i'){
            insert(str);
            //printf("%s %s %d\n",op,str,i);
        }
        else{
            ret = find(str);
            if(ret==0) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}

