#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long max(int a, int b){
    if(a>=b) return a;
    else return b;
}

long long min(int a, int b){
    if(a<=b) return a;
    else return b;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a.at(i);
    
    long long mi = a.at(0), ma = a.at(0), su = a.at(0);
    for(int i=1; i<n; i++){
        mi = min(mi, a.at(i));
        ma = max(ma, a.at(i));
        su += a.at(i);
    }
    cout << mi << " " << ma << " " << su << endl;
    return 0;
    
    
}
