#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    unordered_set<string> u(n);
    string tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        u.insert(tmp);
    }
    cin >> m;

    bool locked=true;
    for(int i=0; i<m; i++){
        cin >> tmp;
        auto itr = find(u.begin(), u.end(), tmp);
        if(itr!=u.end()){
            if(locked){
                cout << "Opened by " << tmp << endl;
                locked = false;
            }else{
                cout << "Closed by " << tmp << endl;
                locked = true;
            }
        }else{
            cout << "Unknown " << tmp << endl;
        }
    }

    return 0;
}