#include <iostream>
using namespace std;
int solve(int n){
    int ans=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(n-i-j-k>-1&&n-i-j-k<10)ans++;
            }
        }
    }
    return ans;
}
int main(){
    int n;
    while(cin>>n){
        cout<<solve(n)<<endl;
    }
    return 0;
}