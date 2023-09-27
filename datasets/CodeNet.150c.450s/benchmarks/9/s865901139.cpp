#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string sent, sub;
    int m, h;
    
    while(1){
        cin >> sent;
        if ( sent == "-") break;
        cin >> m;
        for ( int i = 0; i < m; i++){
            cin >> h;
            sub = sent.substr(0,h);
            sent.erase(0,h);
            sent = sent + sub;
        }
        cout << sent << endl;
    }
    return 0;
}

