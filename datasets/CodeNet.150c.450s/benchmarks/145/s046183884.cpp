#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <map>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(void)
{
    string s, max_s = "", most_s = "";
    int most = 0;
    map<string, int> count;
    
    while(cin >> s) {
        if (max_s.size() < s.size()) {
            max_s = s;
        }
        if (count.find(s) == count.end()) {
            count[s] = 0;
        }
        count[s]++;
        if (most < count[s]) {
            most = count[s];
            most_s = s;
        }
    }
    
    cout << most_s << " " << max_s << endl;
    
    return 0;
}