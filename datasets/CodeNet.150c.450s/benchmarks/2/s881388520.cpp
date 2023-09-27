
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=1e5+5;

int n,s[maxn];

int partition(int p,int r)
{
    int x=s[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(s[j]<=x){
            i++;
            swap(s[i],s[j]);
        }
    }
    swap(s[i+1],s[r]);
    return i+1;
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    int q=partition(0,n-1);
    for(int i=0;i<n;i++){
        if(i){
            printf(" ");
        }
        if(i==q){
            printf("[");
        }
        printf("%d",s[i]);
        if(i==q){
            printf("]");
        }
    }
    printf("\n");
    return 0;
}
/*
12
13 19 9 5 12 8 7 4 21 2 6 11
*/

