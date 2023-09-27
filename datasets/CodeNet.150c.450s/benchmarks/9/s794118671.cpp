#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;
int main(){
    int h,m;
    char c;
    string str,sum="";
    while(cin>>str&&str!="-"){
        cin>>m;
        sum=str+str;
        for(int i=1;i<=m;i++){
            cin>>h;
            string ans;
            for(int j=h;j<str.size()+h;j++){
                c=sum[j];
                ans+=c;
            }
                sum=ans+ans;
            if(i==m){
                cout<<ans<<endl;
                break;
            }
        }
    }
    return 0;
}