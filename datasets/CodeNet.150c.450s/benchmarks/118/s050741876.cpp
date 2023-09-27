#include <iostream>
#include<math.h>
using namespace std;
int main(void){
    int n,y,m,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>y>>m>>d;
        int b=0;
        for(int i=y+1;i<=999;i++){
            if((i%3)!=0)
                b=b+195;
            else {
                b=b+200;
            }
        }
       
       int a=0;
       if(y%3==0){
          a=(10-m)*20+(20-d+1);
       }
       else{
           a=(10-m)*20+(20-d+1);
           for(int i=m;i<10;i++){
               if(i%2!=0){
                   a=a-1;
               }
           }
           if(m%2==0)
           a=a-1;
       }
       b=b+a;
        cout<<b<<endl;
    }
    return 0;
}

