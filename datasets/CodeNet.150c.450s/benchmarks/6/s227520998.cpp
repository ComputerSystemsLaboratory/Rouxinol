#include<iostream>
#include<string>
using namespace std;

void SME(int a,int b,int c);

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    SME(a,b,c);
    return 0;
}

void SME(int a,int b,int c){
    if(a<b && b<c){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
