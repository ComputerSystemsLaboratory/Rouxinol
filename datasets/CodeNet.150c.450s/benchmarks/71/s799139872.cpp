#include<iostream>
using namespace std;

int main(){ 
    int a,b,c,d,n,cnt;

    while(cin>>n){
        cnt=0;  
        if(n<37){
            for(a=0;a<10;a++){
            for(b=0;b<10;b++){
            for(c=0;c<10;c++){
            for(d=0;d<10;d++){
                if(a+b+c+d==n)cnt++;
            }       
            }       
            }       
            }       
        }       
        cout<<cnt<<endl;
    }
    return 0;
}