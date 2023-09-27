#include <iostream>
using namespace std;

int main(){
    int s=0, t=0;
    int n=4;
    while(n--){ int a; cin>>a; s+=a; };
    n=4;
    while(n--){ int a; cin>>a; t+=a; };
    cout<<(s>t ? s : t)<<endl;
}