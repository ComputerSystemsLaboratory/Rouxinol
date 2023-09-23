#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,n) for(int i = 0; i < (int)n; ++i)
 
bool isPrime(int num)
{
    if(num == 2) return true;
    if(num%2 == 0) return false;
 
    // +1 重要
    for(int i = 3; i < sqrt(num) + 1; i += 2) {
        if(num % i == 0) return false;
    }
    return true;
}
 
int main()
{
    int N;
    int count = 0;
    int num;
 
    cin >> N;
 
    REP(i, N) {
        cin >> num;
        if(isPrime(num)) ++count;
    }
 
    cout << count << endl;
 
    return 0;
}