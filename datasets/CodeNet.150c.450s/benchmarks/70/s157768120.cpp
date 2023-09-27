#include <iostream>
using namespace std;
int main(void){
    // Here your code !

    string str[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
    int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    while(1){
            int m,d,n=0;
    cin>>m>>d;
    if(m==0) break;

    for(int i=1;i<m;i++){
        n=n+month[i];
    }
    n=n+d;
    
  
        
        cout<<str[n%7]<<endl;
    }
}