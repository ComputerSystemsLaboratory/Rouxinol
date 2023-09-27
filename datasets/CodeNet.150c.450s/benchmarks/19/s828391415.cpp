#include <iostream>
using namespace std;
int main(void){
    int x;
    int y;
    
    for(int i=1;;i++){
           cin>>x;
           cin>>y;
        if(x==0&&y==0) break;
        if(x>y)swap(y,x);
         cout<<x<<" "<<y<<endl;
    }
    
}
