#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, bool> doors;
    int n, m, i;
    cin >> n;
    string id;
    bool st = true;
    for (i=0;i<n;i++){
        cin >> id;
        doors[id]=true;
    }
    cin >> m;
    for (i=0;i<m;i++){
        cin >> id;
        if (doors.find(id)==doors.end()){
            cout << "Unknown " << id << endl;
        }else if(st){
            cout << "Opened by " << id << endl;
            st=false;
        }else{
            cout << "Closed by " << id << endl;
            st=true;
        }
    }
}