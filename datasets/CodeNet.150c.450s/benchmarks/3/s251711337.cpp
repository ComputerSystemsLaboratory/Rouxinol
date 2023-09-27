#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string str,aoki;
    int q,a,b;
    cin>>str>>q;
    for(int i=0;i<q;++i){
        cin>>aoki>>a>>b;
        if(aoki=="print"){
            for(int i=a;i<=b;++i){
                cout<<str[i];
            }
            cout<<endl;
        }
        else if(aoki=="reverse"){
            string rina=str;
            for(int i=a;i<=b;++i){
                str[i]=rina[b-(i-a)];
            }
        }
        else if(aoki=="replace"){
            string yazawa;
            cin>>yazawa;
            for(int i=a;i<=b;++i){
                str[i]=yazawa[i-a];
            }
        }
    }
    return 0;
}

