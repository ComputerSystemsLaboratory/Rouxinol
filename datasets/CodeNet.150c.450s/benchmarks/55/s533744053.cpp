#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    string number;
    
    while(1){
    cin>>number;
    if(number=="0")break;
    int num;
    int k=0;
    for(int i=0;number[i];i++){
        num=number[i]-'0';
        k=num+k;
    }
    cout<<k<<endl;
    }
}