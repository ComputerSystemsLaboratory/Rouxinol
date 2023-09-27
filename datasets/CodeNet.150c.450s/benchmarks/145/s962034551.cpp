#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
using namespace std;
string str[1001],s,anss,lon;
int ans,num[1001],ma,i,a;
int main(){
    while(cin>>s){
        if(ma<s.size()){
            ma=s.size();
            lon=s;
        }
        str[i]=s;
        i++;
    }
    for(int j=0;j<i;j++){
        if(num[j]!=0)continue;
        a=0;
        for(int k=j+1;k<i;k++){
            if(str[j]==str[k]){
                a++;
                num[k]=1;
            }
            if(ans<a){
                ans=a;
                anss=str[k];
            }
        }
    }
    cout<<anss<<" "<<lon<<endl;
    return 0;
}