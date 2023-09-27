#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>

//ios::sync_with_stdio(false);

using namespace std;

const int INF = (1<<30) - 1;

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    long long int res = a;
    res *= b;
    return res/gcd(a, b);
}

int main(){
    int a, b;
    while(cin >> a >> b){
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
    
	return 0;
}