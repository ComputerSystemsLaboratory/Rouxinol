#include<bits/stdc++.h>
using namespace std;
int a[10000],b[10000],c[10000]={0},d[10000]={0},t;
int main(){
    int i=0;
    while(1){
        cin>>t;
        if(t==0)break;
        for(int z=0;z<t;z++){
            cin>>a[i]>>b[i];
            if(a[i]>b[i]){
                c[i]+=a[i]+b[i];
            }else if(b[i]>a[i]){
                d[i]+=a[i]+b[i];
            }else{
                c[i]+=a[i];
                d[i]+=b[i];
            }
        }
        cout<<c[i]<<" "<<d[i]<<endl;
        i++;
    }
    return 0;
}