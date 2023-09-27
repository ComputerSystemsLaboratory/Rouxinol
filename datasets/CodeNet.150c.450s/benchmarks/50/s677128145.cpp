#include <iostream>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        if(a==0)return 0;
    int b=1000-a;
    int count=0;
    if(b/500==1){
        b=b-500;
        count++;
    }
    if(b/100!=0){
            int c=b/100;
            count+=c;
            b=b-100*c;
        }
    if(b/50==1){
            b=b-50;
            count++;
        }
     if(b/10!=0){
            int d=b/10;
            count+=d;
            b=b-10*d;
        }
     if(b/5==1){
            b=b-5;
            count++;
        }
    count+=b%5;
    cout<<count<<endl;
    }
}