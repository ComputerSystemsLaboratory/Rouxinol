#include <iostream>
using namespace std;
int n,q,bit[10000001];
void add(int a,int b){
    bit[a]+=b;
    while(a<=n){
        a+=a&-a;
        bit[a]+=b;
    }
}
int sum(int i){
    if(i==0)return 0;
    
    return bit[i]+sum(i-(i&-i));
}
int main(void){
    cin>>n>>q;
    for(int i=0;i<q;i++){
        int c,x,y;
        cin>>c>>x>>y;
        if(c==0){
            add(x,y);
        }else{
            cout<<sum(y)-sum(x-1)<<endl;
        }
    }
}