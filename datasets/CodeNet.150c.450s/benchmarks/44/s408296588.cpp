#include<cstdio>
#include<set>
using namespace std;

int main()
{

    int a[4], b[4];
    set<int> c;
    while(scanf("%d%d%d%d%d%d%d%d",a,a+1,a+2,a+3,b,b+1,b+2,b+3)!=EOF)
    {
        c.clear();
        for(int i=0; i<4; i++)
        {
            c.insert(a[i]);
        }
        int d=0,e=0;
        for(int i=0; i<4; i++)
        {
            if(b[i]==a[i])
            {
                d++;
                e++;
            }
            else if(c.find(b[i])!=c.end())
                e++;
        }
        printf("%d %d\n",d,e-d);
    }
    return 0;
}