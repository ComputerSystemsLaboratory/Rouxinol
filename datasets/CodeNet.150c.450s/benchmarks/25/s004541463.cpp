#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    char x;
    int t=0;
    char P[1201];
    for(int i=0;i<=1200;i++){
        scanf("%c",&x);
        P[i]=tolower(x);
    }
    for(char s='a';s<='z';s++){
        for(int i=0;i<=1200;i++){
            if(P[i]==s) t+=1;
        }
        printf("%c : %d\n",s,t);
        t=0;
    }
}

