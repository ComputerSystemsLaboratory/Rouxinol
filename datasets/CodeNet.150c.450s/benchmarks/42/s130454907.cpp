#include<stdio.h>
#include<cstring>
//int LEN=100005;
const int LEN=100005;
 struct pp{
    char name[100];
    int t;
};
struct myqueue{
    pp a[LEN];
    int head,tail;
    bool isfull(){
      if((tail+1)%LEN==head) return 1;
      return 0;
    }
    bool isempty(){
      if(head==tail)return 1;
      return 0;
    }
    void push(pp x){
        if(!isfull()){
        a[tail%LEN]=x;
        tail++;
    }
    }
    pp pop(){
     if(!isempty()){
        pp m=a[head%LEN];
        head++;
        return m;
     }

    }
} q;
int main( ){
    //myqueue q;
    int m,n;
    pp p;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        scanf("%s%d",p.name,&p.t);
        q.push(p);
    }
    int hm=0;
    while(!q.isempty()){
        pp p1;
        p1=q.pop();
        if(p1.t<=n){
            hm=hm+p1.t;
         printf("%s %d\n",p1.name,hm);
        }else{
         hm=hm+n;
         p1.t-=n;
         q.push(p1);
        }
    }

  return 0;
}