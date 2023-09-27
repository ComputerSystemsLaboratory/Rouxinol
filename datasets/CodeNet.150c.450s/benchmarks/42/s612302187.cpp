#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<stdio.h>
#include<stack>
#include<stdlib.h>
#define LEN 100005
using namespace std;
//queue実装
typedef struct pp{
   // char name[100];
    string name;
    int t;
} P;

P Q[LEN];
int head,tail,n;
void enqueu(P x){
    Q[tail]=x;
    tail=(tail+1)%LEN;
}
P dequeue(){
    P x=Q[head];
    head=(head+1)%LEN;
    return x;
}
int main(){
    int elaps = 0,c;
    int i,q;
    P u;
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++){
        //sscanf("%s",Q[i].name);
        cin>>Q[i].name;
        scanf("%d",&Q[i].t);
        
    }
    head=1;
    tail=n+1;
    while(head!=tail){
        u=dequeue();
        c=min(q,u.t);
        u.t-=c;
        elaps+=c;
        if(u.t>0){
            enqueu(u);
        }else{
            cout<<u.name<<" "<<elaps<<endl;
        }
        
        
    }

return 0;
}

