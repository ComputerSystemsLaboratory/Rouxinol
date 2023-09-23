#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int x){
    if(x==2){
        return true;
    }else if(x < 2 || x % 2 == 0){
        return false;
    }
    for(int i=3;i <= sqrt(x);i += 2){
        if(x % i ==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    int x;
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> x;
        if(is_prime(x)){
            cnt++;
        }
    }
    cout << cnt << endl;
}
