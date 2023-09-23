#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int d;
    int s;
    
    while(cin>>d){
        s=0;
        for(int i=1;i<=(600/d)-1;i++){
            s=s+d*(d*i)*(d*i);
        }
            cout<<s<<endl;
    }

}