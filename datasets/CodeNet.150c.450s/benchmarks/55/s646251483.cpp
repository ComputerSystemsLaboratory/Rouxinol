#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    string a;
    while(1){
        cin>>a;
        if(a=="0")break;
        int b=0;
        for(int i=0;i<a.size();i++){
            b += a[i]-'0';
        }
        cout<<b<<endl;
    }
    return 0;
}
