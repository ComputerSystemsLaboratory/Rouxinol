#include <iostream>
using namespace std;
int main(void){
    int i,x;
    i=0;
    cin>>x;
    while(x != 0){
       if (x != 0){
           i++;
       }
       if (x == 0){
           break;
       }
           cout<<"Case "<<i<<":"<<" "<<x<<endl;
           cin>>x;
    }
    return 0;
}

