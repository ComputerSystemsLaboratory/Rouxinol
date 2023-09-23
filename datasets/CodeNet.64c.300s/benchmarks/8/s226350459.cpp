#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>> n;
    for(i=3;i<=n;i++){
        if(i%3==0){
            cout<< " "<< i;
        }else{  
            for(j=10;j<i;j*=10){
                if((i%j)==3||(i/j)%10==3){
                    cout<< " "<< i;
                    break;
                }
            }
        }
    }
    cout<< endl;
    return 0;
}