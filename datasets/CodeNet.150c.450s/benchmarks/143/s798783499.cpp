#include <iostream>
using namespace std;

#include <string>
#include <vector>
#include <map>
int main(){
    int n; cin >> n;
    map<int,int> dates;
    long long sum = 0;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        dates[x]++;
        sum += x;
    }
    int Q; cin >> Q;
    while(Q--){
        int b,c; cin >> b >> c;
        sum += (c-b)*dates[b];
        dates[c] += dates[b];
        dates[b] = 0;
        cout << sum << endl;
    }
}