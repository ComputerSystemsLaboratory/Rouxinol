#include<stdio.h>

struct SI{int top;int west;int south;int east;int north;int back;};

struct SI E(struct SI P);
struct SI W(struct SI);
struct SI S(struct SI P);
struct SI N(struct SI P);


int main(){

struct SI P;
char q;

scanf("%d%d%d%d%d%d",&P.top, &P.south, &P.east, &P.west, &P.north, &P.back);
while(scanf("%c",&q)!=EOF){
if(q=='E')P=E(P);
if(q=='N')P=N(P);
if(q=='W')P=W(P);
if(q=='S')P=S(P);


}
printf("%d\n",P.top);

return 0;
}

struct SI N(struct SI P){
int t=P.top;
P.top=P.south;P.south=P.back;P.back=P.north;P.north=t;
return P;
}

struct SI S(struct SI P){
int t=P.top;
P.top=P.north;P.north=P.back;P.back=P.south;P.south=t;
return P;
}
struct SI E(struct SI P){
int t=P.top;
P.top=P.west;P.west=P.back;P.back=P.east;P.east=t;
return P;
}
struct SI W(struct SI P){
int t=P.top;
P.top=P.east;P.east=P.back;P.back=P.west;P.west=t;
return P;
}