#include<iostream>
#include<string>
using namespace std;

class D{
    public:
    int f[6];
    D(){}
    void rollx(){
        roll(0,2,5,3);
    }
    void rolly(){
        roll(0,1,5,4);
    }
    void rollz(){
        roll(1,2,4,3);
    }
    void roll(int a,int b,int c,int d){
        int t=f[a];
        f[a]=f[b];
        f[b]=f[c];
        f[c]=f[d];
        f[d]=t;
    }
};

int right(D c,int a,int b){
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            if(c.f[0]==a&&c.f[1]==b)return c.f[2];
            c.rollz();
        }
        if(i%2==0)c.rolly();
        else c.rollx();
    }
    return -1;
}

int main(){
    D c;
    int n,o,p;
    for(int j=0;j<6;j++)cin>>c.f[j];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>o>>p;
        cout<<right(c,o,p)<<endl;
    }
    return 0;
}
