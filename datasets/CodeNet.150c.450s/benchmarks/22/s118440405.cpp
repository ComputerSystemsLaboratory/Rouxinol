#include <iostream>
using namespace std;
#define INF 10000001
int v,e,r,d[1000],cnt;
class edge{
    public:
    int from,to,cost;
};

int main(void){
   cin>>v>>e>>r;
   edge x[e];
   for(int i=0;i<e;i++)cin>>x[i].from>>x[i].to>>x[i].cost;
      
   
   for(int i=0;i<v;i++)d[i]=INF;
   d[r]=0;
   while(1){
       bool update=false;
       for(int i=0;i<e;i++){
           if(d[x[i].from]<INF&&d[x[i].from]+x[i].cost<d[x[i].to]){
               d[x[i].to]=d[x[i].from]+x[i].cost;
               update=true;
           }
       }
       if(update==false)break;
       if(cnt==v-1){
           cout<<"NEGATIVE CYCLE\n";
           return 0;
       }
       cnt++;
   }
    for(int i=0;i<v;i++){
        if(d[i]==INF)cout<<"INF\n";
        else cout<<d[i]<<endl;
    }
}