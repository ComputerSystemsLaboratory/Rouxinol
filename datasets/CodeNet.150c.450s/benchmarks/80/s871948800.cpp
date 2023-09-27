#include<bits/stdc++.h>
using namespace std;

int get(){
    int ret=0;
    for(int i=0;i<4;i++){
        int a;cin>>a;
        ret+=a;
    }
    return ret;
}
int main(){
    cout<<max(get(),get())<<endl;
    return 0;
}