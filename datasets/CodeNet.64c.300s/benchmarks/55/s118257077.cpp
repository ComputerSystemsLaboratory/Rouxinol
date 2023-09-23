#include<iostream>
using namespace std;
int main(){
    int i=0;
    int x;
    while(1){
        cin>>x;
        if(x==0) break;
        i++;
        cout<<"Case"<<" "<<i<<":"<<" "<<x<<endl;
    }
    return 0;
}
