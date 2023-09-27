#include <iostream>
#include <cstdlib>
using namespace std;
#define M 100000
typedef struct PT{
    char name[11];
    int time;
} PT;
PT a[M+1];
int head=0,tail=0;
void Init()
{
    head=tail=0;
}
bool IsFull()
{
    return tail-head==-1||tail-head==M;
}
bool IsEmpty()
{
    return head==tail;
}
PT dequeue()
{
    if(IsEmpty())
    {
        cout<<"EMPTY"<<endl;
        exit(1);
    }
    if(head==M)
    {
        head=0;
        return a[M];
    }
    ++head;
    return a[head-1];
}
void enqueue(PT x)
{
    if(IsFull())
    {
        cout<<"FULL"<<endl;
        exit(1);
    }
    a[tail]=x;
    ++tail;
    if(tail==M+1)
        tail=0;
}
int main()
{
    PT in;
    int i,n,q,time=0;
    cin>>n>>q;
    for(i=0;i<n;i++)
    {
        cin>>in.name>>in.time;
        //scanf("%s%d",in.name,&in.time);
        enqueue(in);
    }
    while(!IsEmpty())
    {
        in = dequeue();
        if(in.time<=q)
        {
            time+=in.time;
            cout<<in.name<<' '<<time<<endl;
            //printf("%s %d\n",in.time,time);
        }
        else
        {
            time+=q;
            in.time-=q;
            enqueue(in);
        }
    }
    return 0;
}