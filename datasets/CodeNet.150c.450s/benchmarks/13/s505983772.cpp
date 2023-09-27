#include<string>
#include<iostream>
using namespace std;
int b[26];
int main(){
    string a,b,c;
    cin>>a>>b;
    c = a + a;
    for(int i=0;i<a.size();i++){
        if(b==c.substr(i,b.size())){
            cout<<"Yes"<<endl;
            goto Exit;
        }
    }
    cout<<"No"<<endl;
    Exit:;
    return 0;
}