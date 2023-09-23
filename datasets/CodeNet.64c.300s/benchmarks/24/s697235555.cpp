#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    a=b=0;

    while(cin>>n,n){
        a=b=0;
        while(n--){
            int x,y;
            cin>>x>>y;
            if(x>y)a+=x+y;
            else if(x<y)b+=x+y;
            else{
                a+=x;
                b+=x;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}