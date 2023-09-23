#include <iostream>
using namespace std;
int main(void){
    int x,y;
    cin>>x>>y;
    while(1){
       if (x==0 && y==0){
           break;
       }
       if (x > y){
           cout<<y<<" "<<x<<endl;
       } else{
           cout<<x<<" "<<y<<endl;
       }
       cin>>x>>y;
    }
    return 0;
}

