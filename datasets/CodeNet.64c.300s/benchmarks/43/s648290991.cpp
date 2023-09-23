#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    a=b=0;
    for(int i=0;i<4;i++){
        cin>>c;
        a+=c;
    }
    for(int i=0;i<4;i++){
        cin>>c;
        b+=c;
    }
    c=max(a,b);
    cout<<c<<endl;
    return 0;
}