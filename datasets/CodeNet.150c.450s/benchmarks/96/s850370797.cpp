#include<stdio.h>
#include<iostream>
#include<utility>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define FORR(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define CHMIN(a,b) (a) = min((a),(b))
#define CHMAX(a,b) (a) = max((a),(b))

int main()
{
    char ban[10][10]={{},{'.',',','!','?',' ','#'},{'a','b','c','#'},{'d','e','f','#'},{'g','h','i','#'},{'j','k','l','#'},{'m','n','o','#'},{'p','q','r','s','#'},{'t','u','v','#'},{'w','x','y','z','#'}};
    char in[1025]={};
    /*
    REP(i,10)
    {
        REP(j,10)printf("%c ",ban[i][j]);
        printf("\n");
    }
    */
    int a;
    scanf("%d\n",&a);
    while(a-->0)
    {
        REP(i,1025)in[i]='\0';
        scanf("%s\n",in);
        if(in[0]=='\0')return 0;
        char *a=&in[0];
        int num=0;
        int row=0;
        while(*a!='\0')
        {
            if(*a=='0')
            {
                if(ban[row][num]!='\0')printf("%c",ban[row][num]);
                row=0;
                num=0;
            }
            else if(row==*a-'0')
            {
                num++;
                if(ban[row][num]=='#')num=0;
            }
            else if(row!=*a-'0')
            {
                row=*a-'0';
                num=0;
            }
            a++;
        }
        if(ban[row][num]!='\0')printf("%c",ban[row][num]);
        printf("\n");
    }
    return 0;
}
