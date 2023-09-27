#include <unordered_set>
#include <string>
#include <iostream>
using namespace std;

int main() {
        typedef unordered_set<string> set_t;
        set_t A;
        int n;
        string s,t;
        cin >> n;
        for (int i = 0; i<n; i++){
                cin >> s >> t;
                if (s == "insert"){
                        A.insert(t);
                }
                else if (s == "find"){
                        bool find = A.count(t);
                        cout << (find?"yes":"no") << endl;
                }
        }
}