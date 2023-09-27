#include <iostream>
using namespace std;

int solver(int cnt, int s, int d){
    if(d == 0) return (s==0)?1:0;
    int sum = 0;
    for(int i=cnt+1; i<=9; ++i){
        sum += solver(i, s-i, d-1);
    }
    return sum;
}

int main(){
    int n, s;
    while(cin >> n >> s, n != 0 || s != 0){
        cout << solver(-1,s,n) << endl;
    }
    return 0;
}