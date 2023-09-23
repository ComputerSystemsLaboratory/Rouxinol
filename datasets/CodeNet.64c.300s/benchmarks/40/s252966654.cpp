#include"bits/stdc++.h"
using namespace std;
int main(){
    char str[1202];
    memset(str,'+',sizeof(str));
    int i=0;
    str[i]=getchar();
    while(str[i]==0x20||str[i]<=122&&str[i]>=33){
        if(str[i]>=97){
            str[i]=str[i]-32;
        }
        else if(str[i]>=65){
            str[i]=str[i]+32;
        }
        cout<<str[i];
        i++;
        str[i]=getchar();
    }
    cout<<endl;
}
//Fair, later, occasionally cloudy.
//Fair, later, occasionally cloudy.