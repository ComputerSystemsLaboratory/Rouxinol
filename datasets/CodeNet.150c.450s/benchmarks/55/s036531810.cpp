#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        for(;;){
                int a=0;
                for(;;){
                        char c;
                        scanf("%c",&c);
                        if(c=='\n') break;
                        else a+=(int(c)-48);
                }
                if(a) printf("%d\n",a);
                else break;
        }
        return 0;
}