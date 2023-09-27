#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        for(;;){
                int ans=0;
            char c;
                for(;;){
                        scanf("%c",&c);
                        if(c=='\n'){
                                break;
                        }else{
                                ans+=c-'0';
                        }
                }
                if(ans) printf("%d\n",ans);
                if(!ans) break;
        }
        return 0;
}