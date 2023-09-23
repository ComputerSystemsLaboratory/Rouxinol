#include<iostream>
using namespace std;
int main(){
    int x,i=1;
    while(1){
        cin>>x;
        if(x==0){
            break;
        }
        else{
            cout<<"Case"<<" "<<i<<":"<<" "<<x<<endl;
            i++;
        }
    }
    return 0;
}
