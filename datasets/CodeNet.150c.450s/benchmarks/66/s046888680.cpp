#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    int N;
    cin >> N;
    set<string> U;
    while(N--){
        string id;
        cin >> id;
        U.insert(id);
    }
    bool cl = true;
    int M;
    cin >> M;
    while(M--){
        string T;
        cin >> T;
        if(!U.count(T))T = "Unknown " + T;
        else{
            T = (cl? "Opened by ": "Closed by ") + T;
            cl = !cl;
        }
        cout << T << '\n';
    }
    return 0;
}