#include<iostream>
using namespace std;
int main(){
    int n,x,t;
    while(1){
        cin>>n>>x;
        t=0;
        if (n==0&&x==0) break;
        else{
            for (int a=1;a<=n;a++){
                if (a==n-1) break;
                else for (int b=a+1;b<=n;b++){
                    if (b==n) break;
                    else for (int c=b+1;c<=n;c++){
                        if (a+b+c==x) t+=1; 
                    }
                }
            }
        }
        cout<<t<<endl;
    }
    return 0;
}
