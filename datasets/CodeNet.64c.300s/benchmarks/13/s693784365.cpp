#include <iostream>
using namespace std;

int fibo[50];
int rec(int i){
    if(i == 0 || i == 1) return 1;
    if(fibo[i] != -1) return fibo[i];
    
    int ret = 0;
    ret = rec(i-1) + rec(i-2);
    return fibo[i] = ret;
}

int main(void){
    // Your code here!
    int N;
    cin >> N;
    for(int i = 0; i < 50; i++) fibo[i] = -1;
    cout << rec(N) << endl;
}

