#include <iostream>
using namespace std;int main(){int a=1,b=1,c;cin>>c;for(int i=c-1;i;--i){swap(a,b);a+=b;}cout<<a<<endl;}