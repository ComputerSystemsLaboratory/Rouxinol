#include<iostream>
#include<set>
using namespace std;

int main(){
    int n, m;
    string u;
    set<string> key;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> u;
        key.emplace(u);
    }

    cin >> m;
    bool locked = true;

    for(int i = 0; i < m; i++){
        cin >> u;
        if(key.count(u)){
            if(locked)  cout << "Opened by " << u << endl;
            else        cout << "Closed by " << u << endl;
            locked = !locked; 
        }else{
            cout << "Unknown " << u << endl;
        }
    }
    return 0;
}
