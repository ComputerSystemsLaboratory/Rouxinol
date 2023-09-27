#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>

using namespace std;

long long int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}