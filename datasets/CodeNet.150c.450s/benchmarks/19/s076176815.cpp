#include<iostream>
using namespace std;
int main(){
    int x,y;
    int n=0;
    while(n<3000){
        
        cin>>x >>y;
        if(x==0&&y==0)break;
        if(x>=y){
            cout<<y<<" "<<x<<endl;
        }else{
            cout<<x<<" "<<y<<endl;
        }
        n+=1;
        
    }
    return 0;
}
