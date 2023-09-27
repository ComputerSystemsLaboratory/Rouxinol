#include <stdio.h>
#include <stdlib.h>
typedef struct
{  int k;
   int l;
   int r;
}Node;
void print1(Node *t,int p)
{  if(t[p].l>=0) print1(t, t[p].l);
   printf(" %d", t[p].k);
   if(t[p].r>=0) print1(t, t[p].r);
}
void print2(Node *t,int p)
{   printf(" %d", t[p].k);
    if(t[p].l>=0) print2(t, t[p].l);
    if(t[p].r>=0) print2(t, t[p].r);
}
void insert(Node *t,int count,int z)
{  int x=0,y;
   if(count<1) x=-1;
   t[count].k= z;
   t[count].l = -1;
   t[count].r= -1;
   while(x>=0)
   {  y=x; 
      if(z<t[x].k)  x=t[x].l; 
      else x=t[x].r; 
   }
   if(count<1){}
   else if(z < t[y].k) t[y].l=count;
   else   t[y].r=count;
}
int main()
{  char s[10];
   Node *t;
   int m;
   int a;
   int i;
   int count=0;
   scanf("%d", &m);
   t=(Node*)malloc(sizeof(Node)*m);
   for(i=0;i<m;i++)
   {  scanf("%s", &s);
      if(s[0]=='i')
	  {  scanf("%d", &a);
	     insert(t,count,a);
		 count++;
	  }
      if(s[0]=='p')
	  {  if(count>0) print1(t, 0);
         printf("\n");
         if(count>0) print2(t, 0);
         printf("\n");
      }
   }
   return 0;
}
