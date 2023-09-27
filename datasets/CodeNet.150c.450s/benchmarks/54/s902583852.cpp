#include<string>
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string a;
    string b;
    string f;
    string g;
    int c=0,d,e;
    cin>>a;
    d=a.size();
    while(true){
        b="";
        cin>>f;
        e=f.size();
        if(f=="END_OF_TEXT"){
            cout<<c<<endl;
            break;
        }
        for(int i=0;i<e;i++){
            b += tolower(f[i]);
        }
        if(b==a){
            c++;
        }
    }
    return 0;
}