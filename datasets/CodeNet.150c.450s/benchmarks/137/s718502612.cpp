#include <map>
#include <string>
#include <iostream>
using namespace std;
int main() {
    map<string,int>t;
    int n;
    cin>>n;
    string a,b;
    while(n--){
        cin>>a>>b;
        if(a=="insert"){
            t[b]=1;
        }else{
            if(t[b]==0){
                cout<<"no"<<endl;
            }else{
                cout<<"yes"<<endl;
            }
        }
    }
}