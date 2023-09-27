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
            
            kinds.insert(s1 + s2);
            kinds.insert(s2 + s1);
            
            kinds.insert(s1 + r2);
            kinds.insert(r2 + s1);
            
            kinds.insert(r1 + s2);
            kinds.insert(s2 + r1);
            
            kinds.insert(r1 + r2);
            kinds.insert(r2 + r1);
        }
        cout << kinds.size() << endl;
    }
}