#include<iostream>
using namespace std;

int main(){
    int n,R[200000],min,ans;
    cin >> n;
    for ( int i = 0; i < n; i++ ) cin >> R[i];
    ans = R[1]-R[0];
    min = R[0];
    for ( int i = 1; i < n; i++ ){
        if(min>R[i]){
            if(ans < R[i] - min)ans = R[i] - min;
            min = R[i];
        }else if(min<=R[i]){
            if(ans < R[i] - min)ans = R[i] - min;
        }
    }
    cout << ans << endl;
    
    return 0;
}