#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        a+=b;
        for(int i=1;i<1000;i++){
            if(!(a/10)){
                a=i;
                break;
            }
            else a/=10;
        }
        cout<<a<<endl;
    }
    return 0;
}