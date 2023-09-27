#include <iostream>
using namespace std;

int fact(int n){
    int res=0;
    if (n==0) {
        return 1;
    }
    if (n>=3) {
        res+=fact(n-3);
    }
    if (n>=2) {
        res+=fact(n-2);
    }
    if (n>=1) {
        res+=fact(n-1);
    }
    return res;
}

int main(){
    int i;
    while (cin>>i,i) {
        int a=0;
        a+=fact(i);
        int day=a/10;
        cout<<day/365+1<<endl;
    }
}