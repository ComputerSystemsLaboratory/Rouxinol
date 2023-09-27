#include<iostream>
using namespace std;
int main(){
    long int a,b;
    while(cin>>a>>b){
        if(b>a)swap(a,b);
        long long int lcm=(long long int)a*b;
        while(a%b){
            long int c=a%b;
            a=b;
            b=c;
        }
        cout<<b<<" "<<lcm/b<<endl;
    }
}