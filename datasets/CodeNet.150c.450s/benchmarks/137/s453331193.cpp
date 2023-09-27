#include <iostream>
#include <string.h>
using namespace std;

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int getchar(char ch){
    if(ch=='A')return 1;
    else if (ch=='C')return 2;
    else if (ch=='G')return 3;
    else if (ch=='T')return 4;
    else return 0;
}

long long getkey(char str[]){
    long long sum=0,p=1;
    for (int i=0; i<strlen(str); i++) {
        sum+=p*(getchar(str[i]));
        p*=5;
    }
    return sum;
}

int h1(int key){return key%M;}
int h2(int key){return 1+(key%(M-1));}

int find(char str[]){
    long long key,h;
    key=getkey(str);
    for (int i=0; ; i++) {
        h=(h1(key)+i*h2(key))%M;
        if(strcmp(H[h], str)==0)return 1;
        else if (strlen(H[h])==0)return 0;
    }
    return 0;
}
int insert(char str[]){
    long long key,h;
    key=getkey(str);
    for (int i=0; ; i++) {
        h=(h1(key)+i*h2(key))%M;
        if(strcmp(H[h], str)==0)return 1;
        else if (strlen(H[h])==0){
            strcpy(H[h], str);
            return 0;
        }
    }
    return 0;
}

int main(){
    int n,h;
    char str[L],com[9];
    for(int i=0;i<M;i++)H[i][0]='\0';
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>com>>str;
        
        if(com[0]=='i'){
            insert(str);
        }else{
            if (find(str)) {
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}
