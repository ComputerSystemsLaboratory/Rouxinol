#include <iostream>
using namespace std;

void solve(int a,int b){
    int c=a*a+b*b;
    bool s=false;
    while(1){
        for(int i=1;i<=150;i++){
            for(int j=i+1;j<=150;j++){
                if((s||i>a)&&i*i+j*j==c){
                    cout<<i<<" "<<j<<endl;
                    return;
                }
            }
        }
        c++;
        s=true;
    }
}


int main(void){
    int a,b;
    while(cin>>a>>b,a){
        solve(a,b);
    }
}

