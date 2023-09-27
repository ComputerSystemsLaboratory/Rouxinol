#include<iostream>
#include<algorithm>
using namespace std;
int contena[100000];
int n,k;
bool search(int);
int main(){
    int linemax=0;
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>contena[i];
        linemax=max(linemax,contena[i]);
    }
    int ip,ap;
    ip=0;
    ap=(1<<31)-1;
    while(ap-ip>0){
        int dummy=(ap+ip)/2;
        if(linemax>dummy||!search(dummy)){
            ip=dummy+1;
        }else{
            ap=dummy;
        }
    }
    cout<<ap<<endl;
    return 0;
}
bool search(int maxheavy){
    int num=0;
    int use=0;
    for(int i=0;i<n;++i){
        if(maxheavy<num+contena[i]){
            num=contena[i];
            if(++use==k)return false;
        }else{
            num+=contena[i];
        }
    }
    return true;
}