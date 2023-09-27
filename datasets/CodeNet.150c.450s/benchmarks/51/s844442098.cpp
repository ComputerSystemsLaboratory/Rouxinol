#include<bits/stdc++.h>
using namespace std;
int main(){
    bool used[30]={0};
    for(int i=0;i<28;i++){
        int a;
        cin>>a;
        used[--a]=true;
    }
    for(int i=0;i<30;i++){
        if(used[i])continue;
        cout<<i+1<<endl;
    }
    return 0;
}