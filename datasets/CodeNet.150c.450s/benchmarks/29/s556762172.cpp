#include<cstdio>
#include<cstring>
#include<list>
using namespace std;
int main()
{
    list<int> L;
    char minglin[21];
    int n,zhi;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        {
            scanf("%s",minglin);
            if(minglin[0]=='i')
            {
                scanf("%d",&zhi);
                L.push_front(zhi);
            }
            else if(minglin[6]=='F') L.pop_front();
            else if(minglin[6]=='L') L.pop_back();
            else if(minglin[0]=='d')
            {
                scanf("%d",&zhi);
                for (list<int>::iterator j=L.begin();j!=L.end();j++)
                {
                    if(*j==zhi)
                    {
                        L.erase(j);
                        break;
                    }
                }
            }
        }
        int i=0;
        for (list<int>::iterator j=L.begin();j!=L.end();j++)
        {
            if(i++)   printf(" ");
            printf("%d",*j);
        }
        printf("\n");
    return 0;
}