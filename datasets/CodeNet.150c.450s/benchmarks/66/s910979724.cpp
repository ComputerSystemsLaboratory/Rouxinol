#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main(){
    int n,m;
    bool f = false;
    set<string> s;
    cin >> n;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        string str;
        cin >> str;
        if(s.find(str) == s.end()) cout << "Unknown " << str << endl;
        else if(!f){
            cout << "Opened by " << str << endl;
            f = true;
        } else {
            cout << "Closed by " << str << endl;
            f = false;
        }
    }
}