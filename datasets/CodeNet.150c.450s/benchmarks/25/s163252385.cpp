#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int w[26];
        for(int i=0;i<26;i++){
                w[i]=0;
        }
        char c;
    while(scanf("%c",&c)!=EOF){
                c=tolower(c);
                int chk=c-'a';
                if(chk>=9 || chk<27){
                        w[chk]+=1;
                }
        }
        for(int i=0;i<26;i++){
                printf("%c : %d\n",(char)(i+97),w[i]);
        }
        return 0;
}