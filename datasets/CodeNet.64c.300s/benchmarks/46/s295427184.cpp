#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isprime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int a, d, n;
    while(cin>>a>>d>>n && a){
        int ans;
        while(true){
            if(isprime(a)) n--;
            if(n <= 0){
                ans = a;
                break;
            }
            a += d;
        }
        cout<<ans<<endl;
    }
    return 0;
}
    