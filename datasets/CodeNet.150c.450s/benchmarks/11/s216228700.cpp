#include <cstdio>
char ss[]="SHCD";
void outputcard(int c){
 printf("%c %d\n",ss[c/13],c%13+1);
};
int inputcard(){
 char suit[3];
 int num,base;
 scanf("%s %d",suit,&num);
 if (suit[0]=='S') base=0;
 if (suit[0]=='H') base=13;
 if (suit[0]=='C') base=26;
 if (suit[0]=='D') base=39;
 return base+num-1;
};
int main(){
 int i,n,found[52];

 for(i=0;i<52;i++) found[i]=0;
 scanf("%d",&n);
 for(i=0;i<n;i++) found[inputcard()]=1;
 for(i=0;i<52;i++)
  if (found[i]==0) outputcard(i);
};