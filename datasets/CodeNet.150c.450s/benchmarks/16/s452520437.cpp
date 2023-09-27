#include<cstdio>
#include<stack>
#include<cstring>
using namespace std;
#define INF 0x3f3f3f3f
struct node
{
    int id;
    char c;
} a[20005];

struct st
{
    int val;
    int h;
} sum;

char s[20005];
int ans[20005];
int main()
{
    scanf("%s", s);
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        a[i].c=s[i];
        a[i].id=i;
    }
    stack<node> Q;
    stack<st> T;
    int res=0, h=0, s=0;

    for(int i=0; i<len; i++)
    {
        if(a[i].c=='_') continue;
        if(a[i].c=='\\')
        {
            if(a[i].c=='\\') h--;
            Q.push(a[i]);
        }
        else
        {
            h++;
            while(!Q.empty())
            {
                node temp;
                temp=Q.top();
                Q.pop();
                if(temp.c=='\\')
                {
                    sum.val+=a[i].id-temp.id;
                    sum.h=h;
                    break;
                }
            }
        }

        if(sum.val!=0)
        {
            while(!T.empty())
            {
                st temp;
                temp=T.top();
                if(temp.h!=INF && temp.h+1==sum.h)
                {
                    T.pop();
                    sum.val+=temp.val;
                }
                else break;
            }
            if(Q.empty()) sum.h=INF;
            T.push(sum);
        }
        sum.val=0;

    }
    while(!T.empty())
    {
        st temp;
        temp=T.top();
        T.pop();
        ans[res++]=temp.val;
        s+=temp.val;
    }
    printf("%d\n", s);
    printf("%d", res);
    for(int i=res-1; i>=0; i--) printf(" %d", ans[i]);
    printf("\n");
    return 0;
}