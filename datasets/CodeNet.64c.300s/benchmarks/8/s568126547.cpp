#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    ++n;
    for(int i=1;i<n;++i){
        int d=i;
        bool flag=false;
        if(i%3==0){
            flag=true;
        }
        else{
            while(d!=0){
                if(d%10==3){
                    flag=true;
                    break;
                }
                d/=10;
                }
        }
        if(flag){
            cout<< ' ' <<i;
        }
    }
    cout<<endl;
    return 0;
}