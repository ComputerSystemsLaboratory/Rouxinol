#include<iostream>
using namespace std;

int main(){
    int cnt=0;
    int n, x;
    cin >> n >> x;
    while(!(n==0 && x==0)){
        cnt=0;
        for(int i=1;i<=x/3 && i<=n;++i){
            for(int j=i+1;j<=x/2 && j<=n;++j){
                int k=x-i-j;
                if(k>j && k<=n){
                    ++cnt;
                }
            }
        }
        cout<<cnt<<"\n";
        cin >> n >> x;
    }
}