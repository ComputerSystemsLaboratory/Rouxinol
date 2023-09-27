#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        set<string> s;
        string t;
        cin >> t;
        for(int j=1; j < t.size(); j++){
            string r, l;
            r = t.substr(0, j);
            l = t.substr(j);
            s.insert(r+l);
            s.insert(l+r);
            reverse(r.begin(), r.end());
            s.insert(r+l);
            s.insert(l+r);
            reverse(l.begin(), l.end());
            s.insert(r+l);
            s.insert(l+r);
            reverse(r.begin(), r.end());
            s.insert(r+l);
            s.insert(l+r);
        }
        cout << s.size() << endl;
    }
}