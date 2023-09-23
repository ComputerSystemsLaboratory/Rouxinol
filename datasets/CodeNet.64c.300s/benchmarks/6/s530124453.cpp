#include <iostream>
using namespace std;
int main(){
    int a[4][3][10]={};
    int n,b,f,r,v,count=0;
    cin>>n;
    while(cin>>b>>f>>r>>v){
        a[b-1][f-1][r-1]+=v;
        count++;
        if(count==n)break;
    }
    for(b=0;b<4;b++){
        for(f=0;f<3;f++){
            for(r=0;r<10;r++){
                cout<<" "<<a[b][f][r];
            }
            cout<<endl;
        }
        if(b<3)cout<<"####################"<<endl;
    }
}