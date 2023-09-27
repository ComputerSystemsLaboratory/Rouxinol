#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn=100000+10;
int n,q;
struct Item
{
    char name[12];
    int time;
};

int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d%d",&n,&q);
     queue<Item *> que;
    for(int i=0;i<n;i++)
    {
        getchar();
        Item *item=new Item();
        scanf("%s%d",&item->name,&item->time);
        que.push(item);
    }
    int total_time=0;
    while(!que.empty())
    {
        Item* curItem=que.front();que.pop();
        if(curItem->time>q)
        {
            curItem->time-=q;
            que.push(curItem);
            total_time+=q;
        }
        else
        {
            total_time+=curItem->time;
            printf("%s %d\n",curItem->name,total_time);
            delete curItem;
        }
    }
    return 0;
}