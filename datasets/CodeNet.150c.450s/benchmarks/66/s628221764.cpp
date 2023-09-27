#include <iostream>
#include <string>
#include <set>

using namespace std;

#define rep(i,b) for(int i=0; i<b; i++)

int main(){
    set<string> ids;
    int n; cin>>n;
    rep(i,n){
        string id; cin >> id;
        ids.insert(id);
    }
    int m; cin >> m;
    bool open = true;
    string s[2]={"Opened by ","Closed by "};

    rep(i,m){
        string id; cin >> id;
        auto it=ids.find(id);
        if(it!=ids.end()){
            cout << s[open=1-open] << *it << endl;
        } else {
            cout << "Unknown " << id << endl;
        }
    }
}