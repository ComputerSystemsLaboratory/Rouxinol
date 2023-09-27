#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int n,t=0,h=0;
    string taro,hana;
    cin>>n;
    
    for(int i=0;i<n;i++){
    cin>>taro;
    cin>>hana;
    if(taro>hana) t+=3;
    else if(taro<hana) h+=3;
    else if(taro==hana) {
    h+=1;
    t+=1;
    }
    }
    
    cout<<t<<" "<<h<<endl;
}