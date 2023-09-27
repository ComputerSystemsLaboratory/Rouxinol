#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string ans0,ans1;
    string str;
    string lis[1000];
    int lissize=0;
    getline(cin,str);
    str.push_back(' ');
    for(int i=0;i<str.size();i++){
        for(int j=i;j<str.size();j++){
            if(str[j]==' '){
                lis[lissize]=str.substr(i,j-i);
                lissize++;
                i=j+1;
            }
        }
    }
    sort(lis,lis+lissize);
    int ans=0,karians=1;
    for(int i=1;i<lissize;i++){
        if(lis[i]==lis[i-1])karians++;
        else karians=1;
        if(ans<karians){
            ans=karians;
            ans0=lis[i];
        }
    }
    if(ans<karians)ans0=lis[lissize-1];
    karians=0;
    for(int i=0;i<lissize;i++){
        if(karians<lis[i].size()){
            karians=lis[i].size();
            ans1=lis[i];
        }
    }
    cout<<ans0<<' '<<ans1<<endl;
    return 0;
}