#include<iostream>
#include<list>
#include<algorithm>
#include<cstdio>
#define INF 1000005
using namespace std;
char cmd[20];

int main()
{
    int T;
    cin >> T;
    list <int> v;
    while(T--)
    {
        int a;
        cin >> cmd ;
        if(cmd[0]=='i')
        {
            cin >> a;
            v.push_front(a);
        }
        else
        {
            if(cmd[6]=='F')
                v.pop_front();
            else if(cmd[6]=='L')
                v.pop_back();
            else
            {
                cin >> a;
                for(list<int>::iterator it=v.begin();it!=v.end();it++)
                    if(*it==a)
                    {
                        v.erase(it);
                        break;
                    }

            }
        }
        }
        int i=0;
        for(list<int>::iterator it=v.begin();it!=v.end();it++)
        {
            if(i++) printf(" ");
            printf("%d",*it);
        }
        printf("\n");

    return 0;
}