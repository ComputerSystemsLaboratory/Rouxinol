#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int a[5],b[5],hit=0,brow=0;
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
    hit=0,brow=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i]==b[i]){
                hit++;
                break;
            }
            else if(a[i]==b[j])brow++;
        }
    }
    cout<<hit<<" "<<brow<<endl;
    }
return 0;
}