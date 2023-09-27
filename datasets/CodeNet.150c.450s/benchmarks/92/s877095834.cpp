#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        int s = a + b;
        if(s==0){
            cout<<1<<endl;
        }else{
            int ans = 0;
            while(s){
                ans++;
                s /= 10;
            }
            cout<<ans<<endl;
        }
    }
}