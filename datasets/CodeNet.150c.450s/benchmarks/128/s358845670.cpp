#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(void)
{
    int n;
    char sti[21];
    scanf("%s",sti);
    n=strlen(sti);
    for(int i=n-1;i>=0;i--){
        cout<<sti[i];
    }
    cout<<"\n";
}