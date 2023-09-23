#include<iostream>                                         
using namespace std;
bool check_3(int x){
    while(x){    
        if(x%10==3) return true;
        x/=10;
    }
    return false;

}
int main(){
    int n;
    int i=3;
    cin>>n;
    while(i<=n){
        if(i%3==0)cout<<" "<<i;
        else if(check_3(i))cout<<" "<<i;
        i++;

    }

    cout<<"\n";

}

