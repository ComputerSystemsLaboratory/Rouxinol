#include <iostream>
#include <string.h>
using namespace std;
void call(int n){
    for(int i=1;i<=n;i++){
        if(i%3==0){
            cout<<" "<<i;
        }else{
            string s0=to_string(i);
            const char* s1=s0.data();
            const char* s2="3";
            if(strstr(s1,s2)!=NULL){
                cout<<" "<<i;
            }
        }
    }
    cout<<endl;
}
int main(){
    int v;
    cin>>v;
    call(v);
    return 0;
}