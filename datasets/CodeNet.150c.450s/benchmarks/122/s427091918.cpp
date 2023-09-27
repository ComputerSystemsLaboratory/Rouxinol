#include<stdio.h>
#include<cstdlib>
#define NI ( 1<<30 )
int a[2000001];
int H;
void swp(int *a,int *b){
int t = *a; *a = *b; *b = t;
}
void maxtree(int x){
int l = x * 2;
int r = 2 * x + 1;
int p;
if( l <= H && a[l] > a[x])p = l;
else p = x;
if( r <= H && a[r] > a[p])p = r;
if(p != x){
    swp(a+x,a+p);
    maxtree(p);
}
}
int extract(){
int maxv;
if(H < 1)return -NI;
maxv = a[1];
a[1] = a[H--];
maxtree(1);
return maxv;
}

void inserts(int i , int key){
  if( key < a[i] )return;
  a[i] = key ;
  while( i > 1 && a[i / 2] < a[i] ){
    swp(&a[i],&a[i/2]);
    i = i / 2;
  }
}

void insertp(int key){
  H++;
   a[H] = -NI;
   inserts(H,key);
}

int main(){
int key;
char s[10];
while(1){
    scanf("%s",s);
    if(s[0] == 'e' && s[1] == 'n')break;
    else if(s[0] == 'i'){
        scanf("%d",&key);insertp(key);
    }
    else printf("%d\n",extract());
}
return 0;
}