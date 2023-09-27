#include <iostream>
using namespace std;

int r(int n, int max, int s){
    int sum = 0;
    if(n == 1){
        if(max <= s && s <= 9) return 1;
        return 0;
    }
    for(int i = max; i <= 9; i++){
        sum += r(n-1, i+1, s-i);
    }
    return sum;
}

int main(){
    int n, s;
    while(cin >> n >> s){
        if(n == 0 && s == 0) break;
        cout << r(n, 0, s) << endl;
    }
    return 0;
}