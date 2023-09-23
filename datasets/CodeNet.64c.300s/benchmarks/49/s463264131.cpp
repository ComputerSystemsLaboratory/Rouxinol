#include <iostream>
using namespace std;
int digitNum(int n){
    int ans = 0;
    while(n){
        ans ++;
        n /= 10;
    }
    return ans;
}
int main(){
    int a, b;
    while(cin>>a>>b){
        cout<<digitNum(a+b)<<endl;
    }
    return 0;
}
