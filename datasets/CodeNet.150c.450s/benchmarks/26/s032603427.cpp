#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0;
    cin>>a>>b;
    if(a<b){
        cout<<'a'<<' '<<'<'<<' '<<'b'<<endl;
    }else
    if(a>b){
        cout<<'a'<<' '<<'>'<<' '<<'b'<<endl;
    }else
    if(a==b){
        cout<<'a'<<' '<<'='<<'='<<' '<<'b'<<endl;
    }

    return 0;
}