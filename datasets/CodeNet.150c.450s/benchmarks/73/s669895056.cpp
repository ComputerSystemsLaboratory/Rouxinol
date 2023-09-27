#include<iostream>
using namespace std;

int BIT[1000010]={0},bit_size;

void bit_init(int n){
    fill(BIT,BIT+n,0);
    bit_size=n;
}

int bit_sum(int n){
    int ans=0;
    while(n>0){
        ans += BIT[n];
        n&=n-1;
    }
    return ans;
}

void bit_add(int n, int v){
    while(n<=bit_size){
        BIT[n]+=v;
        n+=n&(-n);
    }
}

int main(){
    int n,q;
    cin>>n>>q;
    bit_init(n);
    int which,id,num,s,t;
    for(int i=0;i<q;++i){
        cin>>which;
        switch(which){
            case 0:
                cin>>id>>num;
                bit_add(id,num);
                break;
            case 1:
                cin>>s>>t;
                //err<<bit_sum(t)<<" "<<bit_sum(s-1)<<"\n";
                int ans1=bit_sum(t);
                int ans2=bit_sum(s-1);
                //cout<<ans1<<" "<<ans2<<"\n";
                int ans=ans1-ans2;
                cout<<ans<<"\n";
                break;

        }
    }
    /*for(int i=1;i<=n;++i){
            cerr<<BIT[i]<<"\n";
    }*/
}