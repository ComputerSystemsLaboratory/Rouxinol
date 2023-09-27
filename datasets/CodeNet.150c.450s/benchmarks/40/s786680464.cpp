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
    void roll(int a,int b,int c,int d){
        int t=f[a];
        f[a]=f[b];
        f[b]=f[c];
        f[c]=f[d];
        f[d]=t;
    }
};

int main(){
    D c;
    string s;
    for(int i=0;i<6;i++){
        cin>>c.f[i];
    }
    cin>>s;
    for(int j=0;j<s.size();j++){
        if(s[j]=='E'){
            for(int i=0;i<3;i++){
                c.rollx();
            }
        }
        if(s[j]=='W')c.rollx();
        if(s[j]=='N')c.rolly();
        if(s[j]=='S'){
            for(int i=0;i<3;i++){
                c.rolly();
            }
        }
    }
    cout<<c.f[0]<<endl;
    return 0;
}
