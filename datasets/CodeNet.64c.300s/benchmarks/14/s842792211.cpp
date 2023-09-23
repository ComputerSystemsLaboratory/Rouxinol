#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cin>>a>>b;
    c=a-b;
    if(c<0){
        cout<<"a"<<" "<<"<"<<" "<<"b"<<endl;
    }
    if(c==0){
        cout<<"a"<<" "<<"=="<<" "<<"b"<<endl;
    }
    if(c>0){
        cout<<"a"<<" "<<">"<<" "<<"b"<<endl;
    }

}
