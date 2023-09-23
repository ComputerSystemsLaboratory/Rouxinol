#include<iostream>
using namespace std;
int main(){
    int n,x,t,b;
    t=0;
    n=1;
    x=1;
    cin>>n>>x;
    while(n!=0||x!=0){
        for(int i=1;i<=n;i++){
            for(int a=i+1;a<=n;a++){
                for(int b=a+1;b<=n;b++){
                    if (a+b+i==x) t+=1;
                }
            }
        }
    cout<<t<<endl;
    cin>>n>>x;
    t=0;
    }
}

