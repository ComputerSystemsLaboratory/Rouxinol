#include<iostream>

using namespace std;
int n,a=0;
void check(int x);
int main(void){
    for(;;){
        int z,b,c;
        a=0;
        cin>>n;
        if(n==0)break;
        check(0);
        if(a%10==0)b=a/10;
        else b=1+a/10;
        if(b%365==0)c=b/365;
        else c=1+b/365;

        cout<<c<<endl;
    }


	return 0;
}

void check(int x){

    if(x==n){
        a++;
        return;
    }

    if(x+3<=n)check(x+3);

    if(x+2<=n)check(x+2);

    if(x+1<=n)check(x+1);

}