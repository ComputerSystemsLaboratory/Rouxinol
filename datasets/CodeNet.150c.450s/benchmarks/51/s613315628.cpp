#include <iostream>
using namespace std;
int main(void){
     int temp,a;
     int t[30];
     a=0;
     for(int i=0;i<31;i++){
     t[i]=0;
     }
    for(int i=0;i<29;i++){
     cin>>temp;
     t[temp]=1;
     }
    for(temp=1;temp<=30;temp++){
        if(t[temp]==0){
            cout<<temp<<endl;
        }
    }
}

