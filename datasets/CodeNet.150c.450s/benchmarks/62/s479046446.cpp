void sort(int *p,int *q){
    int temp;
    temp =*p;
    *p=*q;
    *q=temp;
}
#include <iostream>
#define And &&
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(b > c)
        sort(&b,&c);
    if(a > b)
        sort(&a,&b);
    if(b > c)
        sort(&b,&c);
    cout<<a<<" "<<b<<" "<<c<<endl;
}