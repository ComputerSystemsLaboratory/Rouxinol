#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)
int H,A[MAX+1];
void max(int i){
   int l,r,large;
   l=i*2;
   r=i*2+1;
   if(l<=H&&A[l]>A[i]) large=l;
   else large=i;
   if(r<=H&&A[r]>A[large]) large=r;
   if(large!=i)
   {
       swap(A[i],A[large]);
       max(large);
   }
}
int e()
{
    int maxv;
    if(H<1) return -INFTY;
    maxv=A[1];
    A[1]=A[H--];
    max(1);
    return maxv;
}
void inc(int i,int key)
{
    if(key<A[i]) return;
    A[i]=key;
    while(i>1&&A[i/2]<A[i])
    {
        swap(A[i],A[i/2]);
        i=i/2;
    }
}
void insert(int key)
{
    H++;
    A[H]=-INFTY;
    inc(H,key);
}
int main()
{
    int key;
     char com[10];
     while(1)
     {
         scanf("%s",com);
         if(com[0]=='e'&&com[1]=='n')break;
         else if(com[0]=='i')
         {
             scanf("%d",&key);
             insert(key);
         }
         else printf("%d\n",e());
     }
}