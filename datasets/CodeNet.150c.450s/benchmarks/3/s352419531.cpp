#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str,tmp,command;
    int q,a,b;
    cin>>str>>q;
    for(int i=1;i<=q;i++){
        cin>>command>>a>>b;
        if(command=="print"){
            cout<<str.substr(a,b-a+1)<<endl;
        }else if(command=="reverse"){
            tmp=str.substr(a,b-a+1);
            for(int i=a;i<=b;i++)str[i]=tmp[b-i];
        }else{
            cin>>tmp;
            for(int i=a;i<=b;i++)str[i]=tmp[i-a];
        }
    }
    return 0;
}