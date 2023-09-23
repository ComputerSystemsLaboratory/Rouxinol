#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

int main(){
int S;cin>>S;
printf("%d:%d:%d\n",S/3600,S%3600/60,S%60);

return 0;
}