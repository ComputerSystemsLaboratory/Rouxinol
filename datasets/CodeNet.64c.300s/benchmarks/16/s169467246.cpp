#include<iostream>
using namespace std;

int main(){
    int n,min,ans;
    cin >> n;
    int R[n];
    for ( int i = 0; i < n; i++)cin >> R[i];
    min = R[0];
    ans = R[1]-R[0];
    for ( int i = 1; i < n; i++){
        if( min > R[i] ){
            min = R[i];
        }else if( ans < R[i]-min){
            ans = R[i]-min;
        }
    }
    cout << ans << endl;
    
    return 0;
}