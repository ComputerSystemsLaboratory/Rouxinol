#include<iostream>
using namespace std;
int main(void){
    int n;
    int ans = 1;
    cin >> n;
    for(int i=0;i<3;i++){
       ans = ans*n;
    }
    cout << ans << endl;
    return 0;
}