#include<bits/stdc++.h>
using namespace std;

char id[260][20];

bool isin(int n, char s[20]){
    for(int i=0;i<n;++i){
        if(!strcmp(id[i], s)) return true;
    }
    return false;
}

int main(void){
    int n, m;
    bool isOpen = false;
    char user[20];
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> id[i];
    }
    cin >> m;
    for(int i=0;i<m;++i){
        cin >> user;
        bool in = isin(n, user);
        if(in){
            if(isOpen){
                cout << "Closed by " << user << endl;
                isOpen = false;
            }else{
                cout << "Opened by " << user << endl;
                isOpen = true;
            }
        }else{
            cout << "Unknown " << user << endl;
        }
    }
}
