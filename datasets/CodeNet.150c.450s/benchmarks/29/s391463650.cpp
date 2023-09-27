#include <iostream>
#include <cstdio>
#include <cstring>
#include <list>
using namespace std;
list<int> lst;
char op[15];
int dd;
int n;
struct Item
{
    Item *prev;
    Item *next;
    int v;
};
Item *head=NULL;
void init()
{
   head=new Item();
   head->next=head;
   head->prev=head;
}
Item * fnd(int d)
{
    Item *cur=head->next;
    while(cur!=head&&cur->v!=d)
    {
        cur=cur->next;
    }
    return cur;
}
void insert(int d)
{
    Item *item=new Item();
    item->v=d;
    head->next->prev=item;
    item->next=head->next;
    head->next=item;
    item->prev=head;
}
void del(Item *item)
{
    if(item==head) return;
    item->prev->next=item->next;
    item->next->prev=item->prev;
    delete item;
}
void del_first()
{
   del(head->next);
}
void del_last()
{
    del(head->prev);
}
void del_all()
{
    while(head->next!=head) del_first();

}
void print()
{
    Item *p=head->next;
    while(p!=head)
    {
        if(p!=head->next) printf(" ");
        printf("%d",p->v);
        p=p->next;
    }
    printf("\n");
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    init();
    while(n--)
    {
        getchar();
        scanf("%s",op);
        if(strlen(op)<=6)
        {
            if(op[0]=='i')
            {
                scanf("%d",&dd);
                insert(dd);

            }
            else  if(op[0]=='d')
            {
                scanf("%d",&dd);
                del(fnd(dd));

            }
        }
        else
        {
            if(op[6]=='F')
            {
                del_first();
            }
            else if(op[6]=='L')
            {
                del_last();
            }

        }

    }
    print();
    del_all();




    return 0;
}