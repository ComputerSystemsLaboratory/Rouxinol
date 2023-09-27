#include <iostream>
using namespace std;
int main(){
    int a[10];
    int n=0;
    while (!cin.eof()){
        int t;
        cin>>t;
        if (t) a[n++]=t;
        else if (n) cout<<a[--n]<<endl;
    }
    return 0;
}