#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    int n;
    string cmd;
    int x;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> cmd;
        if(cmd == "insert"){
            cin >> x;
            l.push_front(x);
        }else if(cmd == "delete"){
            cin >> x;
            auto it = find(begin(l), end(l), x);
            if(it != l.end()){
                l.erase(it);
            }
        }else if(cmd == "deleteFirst"){
            l.pop_front();
        }else{
            l.pop_back();
        }
    }
    for(auto it=l.begin(); it != l.end();){
        cout << *it;
        it++;
        if(it == l.end()){
            cout << endl;
        }else{
            cout << ' ';
        }
    }
}