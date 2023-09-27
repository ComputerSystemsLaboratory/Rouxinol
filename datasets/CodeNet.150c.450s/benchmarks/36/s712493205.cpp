#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#define f(x) x*x
using namespace std;
int ans;
int main(){
    int ma,n;
    while(cin>>n){
        for(int i=n;i<600;i+=n){
            ans += (f(i) * n);
        }
        cout<<ans<<endl;
        ans=0;
    }
return 0;
}