#include<iostream>
using namespace std;
int main(){
    int H;
    cin>>H;
    int T[H];
    for(int i=0;i<H;i++){
        cin>>T[i];
    }
    for(int i=1;i<H+1;i++){
        cout<<"node "<<i<<": key = "<<T[i-1]<<", ";
        if(i>1){
            cout<<"parent key = "<<T[i/2-1]<<", ";
        }
        if(i*2-1<H){
            cout<<"left key = "<<T[i*2-1]<<", ";
        }
        if(i*2<H){
            cout<<"right key = "<<T[i*2]<<", ";
        }cout<<endl;
    }return 0;
}
