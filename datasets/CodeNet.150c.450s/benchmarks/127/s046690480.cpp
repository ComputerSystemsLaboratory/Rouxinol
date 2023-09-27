#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n; cin >> n;
    while(n--){
        set<string> kinds;
        string str; cin >> str;
        
        for(int i = 1; i < str.size(); i++){
            string s1 = str.substr(i), s2 = str.substr(0,i);
            string r1 = s1, r2 = s2;
            reverse(r1.begin(), r1.end());
            reverse(r2.begin(), r2.end());
            
            string s[8] = {
                s1 + s2, s1 + r2, r1 + s2, r1 + r2,
                s2 + s1, r2 + s1, s2 + r1, r2 + r1,
            };
            for(int j = 0; j < 8; j++) kinds.insert(s[j]);
        }
        cout << kinds.size() << endl;
    }
}