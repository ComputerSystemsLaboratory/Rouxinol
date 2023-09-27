#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int ans[26];
        for(int i=0;i<26;i++){
                ans[i]=0;
        }
//      for(;;){
        char c;
        while(scanf("%c",&c)!=EOF){
//              scanf("%c",&c);
//              if(c==EOF) break;
                c=tolower(c);
                int chk=c-'a';
                if(chk>=0 && chk<27){
            ans[chk]+=1;
                }
        }
        for(int i=0;i<26;i++){
                printf("%c : %d\n",char(i+97),ans[i]);
        }
        return 0;
}