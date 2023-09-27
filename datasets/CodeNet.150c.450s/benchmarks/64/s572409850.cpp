#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool check[40001]{0};
    check[0]=true;
    int a;
    for(int i=0;i<n;++i) {
        cin>>a;
        for(int j=40000;j>-1;--j) {
            if(check[j])check[j+a]=true;
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;++i) {
        cin>>a;
        cout<<(check[a]?"yes":"no")<<endl;
    }
    return 0;
}