#include<stdio.h>
const int J=100005;
struct pp{
  char name[110];
  int t;
};
 struct pailie{
   pp a[J];
   int head,tail;
 bool isfull(){
   if((tail+1)%J==head)return 1;
   return 0;
 }
 bool isempty(){
  if(head==tail) return 1;
  return 0;
 }
  void push(pp x){
    if(!isfull()){
      a[tail%J]=x;
      tail++;
    }
  }
pp pop(){
    if(!isempty()){
      pp m=a[head%J];
       head++;
       return m;
    }
  }
 }q;
int main(){
    int n,m;
    pp p;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
    scanf("%s%d",p.name,&p.t);
    q.push(p);
    }
    int mn=0;
   while(!q.isempty()){
    pp p1;
    p1=q.pop();
    if(p1.t<=m){
       mn+=p1.t;
        printf("%s %d\n",p1.name,mn);
    }
    else {
       mn+=m;
       p1.t-=m;
       q.push(p1);

    }

   }
	return 0;
}