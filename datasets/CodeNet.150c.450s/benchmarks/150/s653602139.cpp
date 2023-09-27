
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=2e6+5;
const int maxv=1e4+5;

int n,s[maxn],b[maxn],c[maxv];

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
        c[s[i]]++;
    }
    for(int i=1;i<=maxv;i++){
        c[i]=c[i]+c[i-1];
    }
    for(int j=n;j>=0;j--){
        b[c[s[j]]]=s[j];
        c[s[j]]--;
    }
    for(int i=1;i<=n;i++){
        if(i>1){
            printf(" ");
        }
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}
/*
7
2 5 1 3 2 3 0
8
4 5 0 3 1 5 0 5
*/
