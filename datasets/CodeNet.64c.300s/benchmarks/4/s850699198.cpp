#include<iostream>
using namespace std;
int main(){
    int a,b,c,d=0;
    cin>>a>>b>>c;
    if(a<b&&b<c){
        cout<<"Yes"<<endl;
        d=1;
    }
    if(d==0){
        cout<<"No"<<endl;
    }
    return 0;
}