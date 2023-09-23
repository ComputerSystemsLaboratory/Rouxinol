#include<iostream>
using namespace std;

int main(){
    long x,y,answer;
    cin>>x>>y;
    if(x==y)answer=x;
    if(x>y){
        int m,n,r;
        m=x;
        n=y;
        while(1){
            r=m%n;
            if(r==0){
                answer=n;
                break;
            }else{
              m=n;
              n=r;
            }
        }
    }
    if(x<y){
        int m,n,r;
        m=y;
        n=x;
        while(1){
            r=m%n;
            if(r==0){
                answer=n;
                break;
            }else{
              m=n;
              n=r;
            }
        }
    }
    cout<<answer<<endl;
}

