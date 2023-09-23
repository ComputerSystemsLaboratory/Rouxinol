#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    int flag=0;
    cin>>a>>b>>c;
    if(a<b){
        if(b<c){
            flag=1;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}

