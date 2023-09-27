#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int x){
    if(x==2){
        //cout << "Prime:" << 2 << endl;
        return 1;
    }else if(x%2==0){
        return 0;
    }else{
        int ans = 1;
        for(int j=2; j<=(int)sqrt((double)x); j++){
            if(x%j==0){
               ans = 0; 
               break;
            }
        }
        //if(ans==1) cout << "Prime:" << x << endl;
        return ans;
    }
}

int main(){
    int n;
    cin >> n;
    int nums;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> nums;
        ans += isPrime(nums);
    }
    cout << ans << endl;
    
}