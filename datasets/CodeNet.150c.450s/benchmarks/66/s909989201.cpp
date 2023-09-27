#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> user;
    for(int i=0;i<n;++i){
        string u;
        cin >> u;
        user.insert(u);
    }
    int m;
    cin >> m;
    bool door = false;
    for(int i=0;i<m;++i){
        string t;
        cin >> t;
        if(user.count(t)){
            cout << (door ? "Closed by " : "Opened by ") << t << endl;
            door = !door;
        }else{
            cout << "Unknown " << t << endl;
        }
    }

    return 0;
}
