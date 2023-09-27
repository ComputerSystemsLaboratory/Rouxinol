#include <iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
map <int,int>mp;
void precalculation()
{
    for(int a=0;a<=9;a++){
        for(int b=0;b<=9;b++){
            for(int c=0;c<=9;c++){
                for(int d=0;d<=9;d++){
                    mp[a+b+c+d]++;
                }
            }
        }
    }
}

int main()
{
    for(int i=0;i<=50;i++) mp[i]=0;
    precalculation();
    int n;
    while(scanf("%d",&n)==1){
        printf("%d\n",mp[n]);
    }
    return 0;
}