#include<cstdio>
#include<iostream>
using namespace std;

// 値が 0 であれば偽・それ以外は真

bool check_num(int n){
    // if (0 == n % 3){
    //     return 1;
    // } else {
    //     return 0;
    // }

    return (0 == n % 3);

    // int x = n;
    // while(x){
    //     if(0 == n % 3){
    //         return true;
    //     }
    //     x /= 10;
    // }
    // return false;
}

// void include3(int n){
bool include3(int n){
    // if (3 == n % 10){
    //     return 1;
    // } else {
    //     return 0;
    // }

    int x = n;
    while(x){
        if(3 == x % 10){
            return true;
        }
        x /= 10;
    }
    return false;

    // return (3 == n % 10);
}

int main(){
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        if(check_num(i) || include3(i)){
            if(1 != i){
                cout << " ";
            }
            cout << i;
        } else {
            // cout << 0;
        }
    }
    cout << endl;

    return 0;
}
