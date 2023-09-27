#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    vector<int> fibo(n + 1);
    fibo[0] = 1;
    fibo[1] = 1;
    for(int i = 2; i <= n; i++){
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    }
    cout << fibo[n] << endl;
    return 0;
}
