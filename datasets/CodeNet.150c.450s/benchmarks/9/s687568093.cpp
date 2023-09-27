#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
int main(){
    string str1,str2;
    int n,m;
    while(1){
        str1="";
        str2="";
        cin>>str1;
        if(str1[0]=='-'){
            break;
        }
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>m;
            str2 = str1.substr(0,m);
            str1.erase(0,m);
            str1 =  str1 + str2;
        }
        cout<<str1<<endl;
        
    }
return 0;
}
