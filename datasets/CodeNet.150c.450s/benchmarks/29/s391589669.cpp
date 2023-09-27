#include <iostream>
#include <cstdio>
#include <cstring>
#include <list>
using namespace std;
list<int> lst;
char op[15];
int dd;
int n;
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        getchar();
        scanf("%s",op);
        if(strlen(op)<=6)
        {
            if(op[0]=='i')
            {
                scanf("%d",&dd);
                lst.push_front(dd);

            }
            else  if(op[0]=='d')
            {
                scanf("%d",&dd);
                for(list<int>::iterator iter=lst.begin(); iter!=lst.end();)
                {
                    if(*iter==dd)
                    {
                        lst.erase(iter);
                        break;
                    }
                    else iter++;
                }
            }
        }
        else
        {
            if(op[6]=='F')
            {
                lst.pop_front();
            }
            else if(op[6]=='L')
            {
                lst.pop_back();
            }

        }

    }
    for(list<int>::iterator iter=lst.begin(); iter!=lst.end(); iter++)
    {
        if(iter!=lst.begin()) printf(" ");
        printf("%d",*iter);
    }
    printf("\n");



    return 0;
}