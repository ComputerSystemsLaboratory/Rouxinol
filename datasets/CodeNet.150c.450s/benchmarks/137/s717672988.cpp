#include<stdio.h>
#include<string.h>
using namespace std;
#define M 1046527
#define L 14
#define NIL (-1)

char h[M][L],s[L],com[9];

int getchar(char ch){
    if(ch=='A') return 1;
    else if(ch=='C') return 2;
    else if(ch=='G') return 3;
    else if(ch=='T') return 4;
    return 0;
}

long long getkey(char str[]){
    long long sum=0,p=1,i;
    for(int i=0;i<strlen(str);i++){
        sum+=p*(getchar(str[i]));
        p*=5;
    }
    return sum;
}

int h1(int key){ return key%M; }
int h2(int key){ return 1+(key%(M-1)); }

int Find(char str[]){
    long long key,i,o;
    key = getkey(str);
    for(i=0;;i++){

        o=(h1(key)+i*h2(key))%M;
        if(strcmp(h[o],str)==0) return 1;
        else if(strlen(h[o])==0) return 0;
    }
    return 0;
}

int minsert(char str[]){
    long long key,i,o;
    key=getkey(str);
    for(i=0;;i++){
        o=(h1(key)+i*h2(key))%M;
        if(strcmp(h[o],str)==0) return 1;
        else if(strlen(h[o])==0){
            strcpy(h[o],str);

            return 0;
        }
    }
}

int main(){
    int n;
    for(int i=0;i<M;i++) h[i][0]='\0';
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s",com,s);
        if(com[0]=='i'){

            minsert(s);
        }
        else{
            if(Find(s)){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
    }
    return 0;
}