#include <iostream>
using namespace std;

void solve(int n){
    int ans=0;
    for(int i=1;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += j;
            if(sum==n && j-i+1>=2 ){
                ans++;
                break;
            }
            if(sum>n){
                break;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        solve(n);
    }
}