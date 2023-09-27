#include<bits/stdc++.h>
using namespace std;
string a;
int main(void){
    while(1){
    int v=0;
    cin>>a;
    if(a[0]=='0') break;
    for(int i=0;i<a.length();i++){
        v+=a[i]-'0';
    }
    cout<<v<<endl;
    }
}

