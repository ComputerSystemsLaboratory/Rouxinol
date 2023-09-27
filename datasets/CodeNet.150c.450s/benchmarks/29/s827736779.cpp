#include<iostream>
#include<stdio.h>
#include<fstream>
#include<algorithm>
using namespace std;
struct mlist{
  int pre,zhi,next;
}x[20000007];
int l=0,head=-1;int u=0;int tail=0;
void cs(int n)
{
    if(l==0||head==-1)
    {
        x[l].next=-1;
        x[l].zhi=n;
        head=l;
        tail=l;
    }
    else {
            x[l].zhi=n;
            x[head].pre=l;
            x[l].next=head;
            head=l;
    }
    l++;
}
int pos(int n)
{
    int hd=head;
    while(x[hd].zhi!=n&&hd!=-1)
    {
        hd=x[hd].next;
    }
    return hd;
}
void ffd();
void dfs(int n)
{
    int k=pos(n);
    if(k==-1)
    {
        return;
    }
    if(k==head)
    {
         ffd();
    }
    if(x[k].next==-1)
    {
        if(x[head].next==-1)
        {
            head=-1;
        }
        else {
            tail=x[tail].pre;
            x[tail].next=-1;
        }

    }
    else
    {
      x[x[k].pre].next=x[k].next;
      x[x[k].next].pre=x[k].pre;
    }
}
void ffs()
{
    //int hd=head;
    //while(x[hd].next!=-1&&hd!=-1)
    //{
    //    hd=x[hd].next;
    //}
    //if(hd==head)
    //{
      //head=-1;
    //}
   //else x[x[hd].pre].next=-1;
   //x[tail].next=-1;
   if(head==-1||head==tail)
   {
       head=-1;
   }
   else {
    tail=x[tail].pre;
   x[tail].next=-1;
   }

}
void  ffd()
{
    if(head!=-1)
     head=x[head].next;
}
int main()
{
   char a[20];int p;
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%s",a);

        if(a[0]=='i')
        {
            scanf("%d",&p);
            cs(p);
        }
        else if(a[6]=='F')
        {
            ffd();
        }
        else if(a[6]=='L')
        {
            ffs();
        }
        else
            {
            scanf("%d",&p);
            dfs(p);
        }
   }
   while(head!=-1)
   {
       if(x[head].next!=-1)
       printf("%d ",x[head].zhi);
       else printf("%d",x[head].zhi);
       head=x[head].next;
   }
   printf("\n");
   return 0;
}