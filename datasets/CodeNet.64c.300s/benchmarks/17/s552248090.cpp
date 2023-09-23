#include<iostream>
#define a(b) (100+b)/100
#define f(x) for(x=1;x<t;x++)
using namespace std;
int main(){
    int e,o,t,i,j;
    while(cin>>e>>o>>t,e){
        int n=0;
        f(i)f(j)if(i*a(e)+j*a(e)==t) n=max(n,i*a(o)+j*a(o));
        cout<<n<<endl;
    }
}