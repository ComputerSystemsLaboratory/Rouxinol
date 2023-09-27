#include <bits/stdc++.h>

#define MAX 50

using namespace std;

int m_fibo(int n){
    static int ans[MAX];
    if(n == 0 || n == 1) ans[n] = 1;
    if(ans[n] > 0) return ans[n];
    return ans[n] = m_fibo(n-1)+m_fibo(n-2);
}

int main(){
    int n; cin >> n;
    cout << m_fibo(n) << endl;
}

