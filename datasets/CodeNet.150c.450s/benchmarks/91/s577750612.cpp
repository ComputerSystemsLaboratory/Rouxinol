#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool p[3000000];
vector<int> prime;

void init(){
    memset(p,1,sizeof(p));
    p[0] = p[1] = false;
    for(int i = 2; i <= 1000000; i++){
        if(!p[i]) continue;
        for(long long j = 1LL*i*i; j <= 1000000; j += i)
            p[j] = false;
        prime.push_back(i);
    }
}

int CntPrime(int n){
    vector<int>::iterator it = lower_bound(prime.begin(), prime.end(), n);
    if(it == prime.end()) return prime.size();
    if( *it > n) it--;
    return (it - prime.begin()+1);
}

int main(){
    init();
    int n;
    while(cin >> n){
        cout << CntPrime(n)<< endl;
    }
    return 0;
}