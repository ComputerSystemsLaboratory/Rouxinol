#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
 
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
 
int a[200],a2[200];
char mark[200],mark2[200],s[1000];
 
int main(void){
    int n,mini;
    char b;
 
    scanf("%d",&n);
    fgets(s,1000,stdin);
    fgets(s,1000,stdin);
    REP(i,n){
        mark[i] = mark2[i] = s[i * 3];
        a2[i] = a[i] = s[i * 3 + 1] - '0';
    }
 
    REP(i,n){
        RFOR(j,i + 1,n)
            if(a[j] < a[j - 1]){
                swap<int>(a[j],a[j - 1]);
                swap<char>(mark[j],mark[j - 1]);
            }
    }


    REP(i,n){
        mini = i;
        FOR(j,i,n)
            if(a2[j] < a2[mini])
                mini = j;
        if(i != mini){
            swap<int>(a2[i],a2[mini]);
            swap<char>(mark2[i],mark2[mini]);
        }
    }
 
    REP(i,n){
        if(i < n - 1)
            printf("%c%d ",mark[i],a[i]);
        else
            printf("%c%d\n",mark[i],a[i]);
    }
    printf("Stable\n");
    mini = 1;
    REP(i,n)
        if(mark[i] != mark2[i]){
            mini = 0;break;
        }
    REP(i,n){
        if(i < n - 1)
            printf("%c%d ",mark2[i],a2[i]);
        else
            printf("%c%d\n",mark2[i],a2[i]);
    }
    if(mini == 1)
        printf("Stable\n");
    else
        printf("Not stable\n");
    return 0;
}