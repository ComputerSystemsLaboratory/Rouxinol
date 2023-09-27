#include <iostream>
#include <string>
#include <set>

using namespace std;

#define rall(c) (c).rbegin(), (c).rend()

int main(){
    int m;
    cin >> m;
    while(m--){
        string tr;
        cin >> tr;
        set<string> org;
        for(int i=1; i<(int)tr.size(); ++i){
            string s = tr.substr(0, i), t = tr.substr(i);
            org.insert(s + t);
            org.insert(t + s);
            org.insert(string(rall(s)) + t);
            org.insert(t + string(rall(s)));
            org.insert(s + string(rall(t)));
            org.insert(string(rall(t)) + s);
            org.insert(string(rall(s)) + string(rall(t)));
            org.insert(string(rall(t)) + string(rall(s)));
        }
        cout << org.size() << '\n';
    }
    return 0;
}