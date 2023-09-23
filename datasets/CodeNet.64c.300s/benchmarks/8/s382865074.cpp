#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int a,n=0,m=0,f=0;
    cin>>a;
    while(n!=a+1){
        f=0;
        m=n;
        if(n%3==0&&n!=0){
            cout<<" "<<n;
            f=1;
        }
        if(f!=1){
            while(1){
                if(m%10==3){
                    cout<<" "<<n;
                    break;
                }else if(m<=10){
                    break;
                }
            m/=10;
            }
        }
        n++;
    }
    cout<<endl;
}

