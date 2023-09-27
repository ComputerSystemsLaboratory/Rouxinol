#include <iostream>
#include <unordered_map>

using namespace std;
int n , q;
long long sum = 0;
unordered_map <long long,int> mp;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        long long x;
        cin >> x;
        mp[x]++;
        sum = sum + x;
    }
    cin >> q;
    for (int i = 1; i <= q; i++){
        long long x,y;
        cin >> x >> y;
        if (x != y){
            sum = sum - x*mp[x];
            sum = sum + y*mp[x];
            mp[y] += mp[x];
            mp[x] = 0;
        }
        cout << sum << "\n";
    }   
    return 0;
}