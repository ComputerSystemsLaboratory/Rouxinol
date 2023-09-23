#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<cstring>
#include<string>
#include<cctype>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
const int maxn = 1e8 + 8;

int a[10000 + 8];
int n,v,j;

void insertSort(int a[])
{
    for(int i = 1; i < n; ++i){
        v = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > v){
            a[j+1]  = a[j];
            j--;
        }
        a[j+1] = v;
    }
}
bool  judge(int x)
{
    if(x == 2) return true;
    for(int i = 2; i <= (int)sqrt(x); ++i){
        if(x % i == 0) return false;
    }
    return true;
}
int main()
{
    memset(a,0,sizeof a);

    scanf("%d",&n);
    for(int i = 0; i < n; ++i){
        scanf("%d",&a[i]);
    }
    insertSort(a);//??¶??´?????????O(n^2)

   /* for(int i = 0; i < n; ++i){
        if(i) printf(" ");
        printf("%d",a[i]);
    }
    printf("\n");*/

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(judge(a[i])) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
/*
11
12
13
14
15
16
17
7
8
9
10
11
*/