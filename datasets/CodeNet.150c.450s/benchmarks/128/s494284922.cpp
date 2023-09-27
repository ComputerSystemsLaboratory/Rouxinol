#include<iostream>
#include<cstdio>
using namespace std;
#define int long long

signed main(){
        //int a;
        //while( scanf("%lld", &a) != EOF ){}

        char str[21]={0};
        scanf("%s",str);
        for(int i=20;i>=0;i--){
                if(str[i]!=0) printf("%c",str[i]);
        }
        printf("\n");

        return 0;
}