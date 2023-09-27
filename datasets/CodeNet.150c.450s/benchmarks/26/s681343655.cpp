#include<iostream>
using namespace std;
int main() {
    int n, k;cin>>n>>k;
    if(n>k){
        cout<<"a > b"<<endl;
    }
    if(n<k){
        cout<<"a < b"<<endl;
    }
    if(n==k){
        cout<<"a == b"<<endl;
    }
}
