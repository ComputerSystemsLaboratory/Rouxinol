#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int S;
        scanf("%d",&S);
        printf("%d:%d:%d\n",S/3600,(S-((S/3600)*3600))/60,S%60);
        return 0;
}