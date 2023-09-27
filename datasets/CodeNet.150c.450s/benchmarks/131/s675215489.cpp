#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define mp(a, b) make_pair(a, b)

int main(){
    int a, L;
    while(cin >> a >> L, a|L){
        map<int, int> j;
        int i = 0;
        while(!j.count(a)){
            // as.emplace(a, i);
            j.insert(mp(a, i++));
            string s = to_string(a);
            s += string(L - s.size(), '0');
            sort(all(s));
            a = stoi(string(rall(s))) - stoi(s);
        }
        cout << j[a] << ' ' << a << ' '<<  i - j[a] << '\n';
    }
    return 0;
}