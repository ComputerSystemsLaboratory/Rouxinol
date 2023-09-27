#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=100000;
    for(int i=0;i<n;i++){
       p=p*1.05;
       if(p%1000!=0){
         p=p/1000*1000+1000;
       }
    }
    cout<<p<<endl;
    return 0;
}
