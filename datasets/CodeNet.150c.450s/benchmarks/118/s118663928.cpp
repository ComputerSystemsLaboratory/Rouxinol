#include <iostream>
using namespace std;
int main(){
    int n,i,c,y,m,d; 
    cin>>n;
    while(n--){
        c=y=m=d=0;
        cin>>y>>m>>d;
        if(y%3!=0&&m%2==0)c+=20-d;
        else c+=21-d;
        for(i=m+1;i<=10;i++){
            if(y%3!=0&&i%2==0)c+=19;
            else c+=20;
        }
        for(i=y+1;i<=999;i++){
            if(i%3==0)c+=200;
            else c+=195;
        }
        cout<<c<<endl;
    }
}