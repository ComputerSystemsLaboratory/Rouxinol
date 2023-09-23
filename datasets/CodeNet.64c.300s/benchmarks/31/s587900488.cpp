#include <iostream>
using namespace std;
int main(){
    
    int n;
    int b[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    
    for(int i=0;i<28;i++){
        cin>>n;
        b[n-1]=0;
    }
    
    for(int k=0;k<30;k++){
        if(b[k]!=0){
            cout<<b[k]<<endl;
        }
    }
}