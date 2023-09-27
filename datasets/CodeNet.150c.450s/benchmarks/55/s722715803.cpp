#include <iostream>
#include <cmath>
#include <cctype>
#include<cstdio>
//#include <string>
using namespace std;
int main(){
    while(true){
    string str;
    cin>>str;
    if(str[0]=='0'&&str.size()==1)break;
    int ans=0;
    for(int i=0;i<str.size();i++){
        ans+=str[i]-'0';
    }
    cout<<ans<<endl;
    
    }
    return 0;
}
