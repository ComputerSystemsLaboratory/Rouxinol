#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int n, m;
    string username;
    set<string> user;
    int door=1;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> username;
        user.insert(username);
    }
    cin >> m;
    for(int i=0;i<m;++i){
        cin >> username;
        if(user.find(username)==user.end()) cout << "Unknown ";
        else{
            if(door) cout << "Opened by ";
            else cout << "Closed by ";
            door = 1 - door;
        }
        cout << username << endl;
    }
}